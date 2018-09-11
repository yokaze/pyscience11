//
//  matplotlib.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
//  This header is compatible with matplotlib 2.2.3.
//
#pragma once
#include <pybind11/pybind11.h>

namespace matplotlib11 {

class matplotlib_module : public pybind11::module {
public:
    using pybind11::module::module;

    template <class... TArgs>
    pybind11::object _add_data_doc(TArgs&&... args)
    {
        return attr("_add_data_doc")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _create_tmp_config_dir(TArgs&&... args)
    {
        return attr("_create_tmp_config_dir")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _decode_filesystem_path(TArgs&&... args)
    {
        return attr("_decode_filesystem_path")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _get_cachedir(TArgs&&... args)
    {
        return attr("_get_cachedir")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _get_config_or_cache_dir(TArgs&&... args)
    {
        return attr("_get_config_or_cache_dir")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _get_configdir(TArgs&&... args)
    {
        return attr("_get_configdir")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _get_data_path(TArgs&&... args)
    {
        return attr("_get_data_path")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _get_data_path_cached(TArgs&&... args)
    {
        return attr("_get_data_path_cached")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _get_home(TArgs&&... args)
    {
        return attr("_get_home")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _get_xdg_cache_dir(TArgs&&... args)
    {
        return attr("_get_xdg_cache_dir")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _get_xdg_config_dir(TArgs&&... args)
    {
        return attr("_get_xdg_config_dir")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _init_tests(TArgs&&... args)
    {
        return attr("_init_tests")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _is_writable_dir(TArgs&&... args)
    {
        return attr("_is_writable_dir")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _open_file_or_url(TArgs&&... args)
    {
        return attr("_open_file_or_url")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _parse_commandline(TArgs&&... args)
    {
        return attr("_parse_commandline")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _preprocess_data(TArgs&&... args)
    {
        return attr("_preprocess_data")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _rc_params_in_file(TArgs&&... args)
    {
        return attr("_rc_params_in_file")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _replacer(TArgs&&... args)
    {
        return attr("_replacer")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _set_logger_verbose_level(TArgs&&... args)
    {
        return attr("_set_logger_verbose_level")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _url_lines(TArgs&&... args)
    {
        return attr("_url_lines")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object _wrap(TArgs&&... args)
    {
        return attr("_wrap")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object checkdep_dvipng(TArgs&&... args)
    {
        return attr("checkdep_dvipng")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object checkdep_ghostscript(TArgs&&... args)
    {
        return attr("checkdep_ghostscript")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object checkdep_inkscape(TArgs&&... args)
    {
        return attr("checkdep_inkscape")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object checkdep_pdftops(TArgs&&... args)
    {
        return attr("checkdep_pdftops")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object checkdep_ps_distiller(TArgs&&... args)
    {
        return attr("checkdep_ps_distiller")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object checkdep_tex(TArgs&&... args)
    {
        return attr("checkdep_tex")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object checkdep_usetex(TArgs&&... args)
    {
        return attr("checkdep_usetex")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object checkdep_xmllint(TArgs&&... args)
    {
        return attr("checkdep_xmllint")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object compare_versions(TArgs&&... args)
    {
        return attr("compare_versions")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object cycler(TArgs&&... args)
    {
        return attr("cycler")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object dedent(TArgs&&... args)
    {
        return attr("dedent")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object get_backend(TArgs&&... args)
    {
        return attr("get_backend")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object get_cachedir(TArgs&&... args)
    {
        return attr("get_cachedir")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object get_configdir(TArgs&&... args)
    {
        return attr("get_configdir")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object get_data_path(TArgs&&... args)
    {
        return attr("get_data_path")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object get_home(TArgs&&... args)
    {
        return attr("get_home")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object get_label(TArgs&&... args)
    {
        return attr("get_label")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object get_py2exe_datafiles(TArgs&&... args)
    {
        return attr("get_py2exe_datafiles")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object interactive(TArgs&&... args)
    {
        return attr("interactive")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object is_interactive(TArgs&&... args)
    {
        return attr("is_interactive")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object is_url(TArgs&&... args)
    {
        return attr("is_url")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object matplotlib_fname(TArgs&&... args)
    {
        return attr("matplotlib_fname")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rc(TArgs&&... args)
    {
        return attr("rc")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rc_file(TArgs&&... args)
    {
        return attr("rc_file")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rc_file_defaults(TArgs&&... args)
    {
        return attr("rc_file_defaults")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rc_params(TArgs&&... args)
    {
        return attr("rc_params")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rc_params_from_file(TArgs&&... args)
    {
        return attr("rc_params_from_file")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rcdefaults(TArgs&&... args)
    {
        return attr("rcdefaults")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object reload(TArgs&&... args)
    {
        return attr("reload")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object sanitize_sequence(TArgs&&... args)
    {
        return attr("sanitize_sequence")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object test(TArgs&&... args)
    {
        return attr("test")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object tk_window_focus(TArgs&&... args)
    {
        return attr("tk_window_focus")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object urlopen(TArgs&&... args)
    {
        return attr("urlopen")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object use(TArgs&&... args)
    {
        return attr("use")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object validate_backend(TArgs&&... args)
    {
        return attr("validate_backend")(std::forward<TArgs>(args)...);
    }
};

matplotlib_module import_matplotlib()
{
    return pybind11::module::import("matplotlib");
}
}
