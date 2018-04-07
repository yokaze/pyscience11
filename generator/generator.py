import os
import pathlib
import textwrap
import types

import matplotlib
import matplotlib.pyplot
import numpy
import scipy
import scipy.fftpack
import scipy.interpolate
import scipy.io
import scipy.io.wavfile
import scipy.signal
import scipy.special


def generate_copyright(filename):
    template = '''\
//
//  $FileName$
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
'''
    copyright = template.replace('$FileName$', filename)
    return copyright


def generate_pragma_once():
    return '''\
#pragma once
'''


def generate_include(include_path):
    if (type(include_path) == str):
        template = '''\
#include <$IncludePath$>
'''
        include_text = template.replace('$IncludePath$', include_path)
        return include_text
    elif (type(include_path) == list):
        ret = ''
        for s in include_path:
            ret += generate_include(s)

        return ret


def generate_begin_namespace(namespace_name):
    template = '''\
namespace $Namespace$ {
'''
    ret = ''
    names = namespace_name.split('::')
    for i, name in zip(range(len(names)), names):
        line = template.replace('$Namespace$', name)
        line = textwrap.indent(line, '    ' * max(0, i - 1))
        ret += line

    return ret


def generate_end_namespace(namespace_name):
    ret = ''
    names = namespace_name.split('::')
    for i, name in reversed(list(zip(range(len(names)), names))):
        line = '''\
}
'''
        line = textwrap.indent(line, '    ' * max(0, i - 1))
        ret += line
    return ret


def generate_begin_class(class_name, indent=0):
    template = '''\
class $ClassName$_module : public pybind11::module {
public:
    using pybind11::module::module;
'''
    ret = template.replace('$ClassName$', class_name)
    return textwrap.indent(ret, ' ' * indent)


def generate_end_class(class_name, indent=0):
    ret = '''\
};
'''
    return textwrap.indent(ret, ' ' * indent)


def generate_class_function(function_name, indent=0):
    template = '''
template <class... TArgs>
pybind11::object $FunctionName$(TArgs&&... args)
{
    return attr("$FunctionName$")(std::forward<TArgs>(args)...);
}
'''
    ret = template.replace('$FunctionName$', function_name)
    return textwrap.indent(ret, ' ' * indent)


def generate_import(full_module_name, indent=0):
    template = '''\
$ModuleName$_module import_$ModuleName$()
{
    return pybind11::module::import("$FullModuleName$");
}
'''
    module_name = full_module_name.split('.')[-1]
    ret = template.replace('$ModuleName$', module_name)
    ret = ret.replace('$FullModuleName$', full_module_name)
    ret = textwrap.indent(ret, ' ' * indent)
    return ret


def generate_blank_line():
    return '''
'''


def build_header(target_module):
    cpp_keywords = ['delete', 'typename']
    full_module_name = target_module.__name__           # 'numpy.random'
    module_name_list = full_module_name.split('.')      # ['numpy', 'random']
    module_name = module_name_list[-1]                  # 'random'
    root_namespace_name = module_name_list[0] + '11'    # 'numpy11'
    full_namespace_name = '::'.join([root_namespace_name] + module_name_list[:-1])    # 'numpy11::numpy'
    class_indent = 4 * (len(module_name_list) - 1)
    member_indent = 4 * len(module_name_list)

    header = generate_copyright('%s.h' % module_name) + \
        generate_pragma_once() + \
        generate_include('pybind11/pybind11.h') + \
        generate_blank_line() + \
        generate_begin_namespace(full_namespace_name) + \
        generate_blank_line() + \
        generate_begin_class(module_name, indent=class_indent)

    sorted_keys = [x for x in target_module.__dict__.keys()]
    sorted_keys.sort()

    for key in sorted_keys:
        value = target_module.__dict__[key]

        if (key in cpp_keywords):
            key += '_'
        if (isinstance(value, types.BuiltinFunctionType) or
                isinstance(value, types.FunctionType) or
                isinstance(value, numpy.ufunc)):
            header += generate_class_function(key, indent=member_indent)

    header += generate_end_class(module_name, indent=class_indent) + \
        generate_blank_line() + \
        generate_import(full_module_name, indent=class_indent) + \
        generate_end_namespace(full_namespace_name)

    include_path = pathlib.Path('include/pyscience11')/('/'.join(module_name_list) + '.h')
    os.makedirs(include_path.parent, exist_ok=True)
    fp = open(include_path, 'w')
    fp.write(header)


build_header(numpy)
build_header(numpy.dual)
build_header(numpy.fft)
build_header(numpy.linalg)
build_header(numpy.random)
build_header(scipy)
build_header(scipy.fftpack)
build_header(scipy.integrate)
build_header(scipy.interpolate)
build_header(scipy.io)
build_header(scipy.io.wavfile)
build_header(scipy.linalg)
build_header(scipy.ndimage)
build_header(scipy.optimize)
build_header(scipy.signal)
build_header(scipy.spatial)
build_header(scipy.special)
build_header(scipy.stats)
build_header(matplotlib)
build_header(matplotlib.pyplot)
