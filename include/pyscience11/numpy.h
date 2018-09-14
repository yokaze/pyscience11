//
//  numpy.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
//  This header is compatible with numpy 1.15.1.
//
#pragma once
#include <pybind11/pybind11.h>

namespace numpy11 {

class numpy_module : public pybind11::module {
public:
    using pybind11::module::module;

    template <class... TArgs>
    pybind11::object abs(TArgs&&... args)
    {
        return attr("abs")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object absolute(TArgs&&... args)
    {
        return attr("absolute")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object add(TArgs&&... args)
    {
        return attr("add")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object add_docstring(TArgs&&... args)
    {
        return attr("add_docstring")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object add_newdoc(TArgs&&... args)
    {
        return attr("add_newdoc")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object add_newdoc_ufunc(TArgs&&... args)
    {
        return attr("add_newdoc_ufunc")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object alen(TArgs&&... args)
    {
        return attr("alen")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object all(TArgs&&... args)
    {
        return attr("all")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object allclose(TArgs&&... args)
    {
        return attr("allclose")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object alltrue(TArgs&&... args)
    {
        return attr("alltrue")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object amax(TArgs&&... args)
    {
        return attr("amax")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object amin(TArgs&&... args)
    {
        return attr("amin")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object angle(TArgs&&... args)
    {
        return attr("angle")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object any(TArgs&&... args)
    {
        return attr("any")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object append(TArgs&&... args)
    {
        return attr("append")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object apply_along_axis(TArgs&&... args)
    {
        return attr("apply_along_axis")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object apply_over_axes(TArgs&&... args)
    {
        return attr("apply_over_axes")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object arange(TArgs&&... args)
    {
        return attr("arange")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object arccos(TArgs&&... args)
    {
        return attr("arccos")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object arccosh(TArgs&&... args)
    {
        return attr("arccosh")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object arcsin(TArgs&&... args)
    {
        return attr("arcsin")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object arcsinh(TArgs&&... args)
    {
        return attr("arcsinh")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object arctan(TArgs&&... args)
    {
        return attr("arctan")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object arctan2(TArgs&&... args)
    {
        return attr("arctan2")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object arctanh(TArgs&&... args)
    {
        return attr("arctanh")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object argmax(TArgs&&... args)
    {
        return attr("argmax")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object argmin(TArgs&&... args)
    {
        return attr("argmin")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object argpartition(TArgs&&... args)
    {
        return attr("argpartition")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object argsort(TArgs&&... args)
    {
        return attr("argsort")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object argwhere(TArgs&&... args)
    {
        return attr("argwhere")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object around(TArgs&&... args)
    {
        return attr("around")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object array(TArgs&&... args)
    {
        return attr("array")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object array2string(TArgs&&... args)
    {
        return attr("array2string")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object array_equal(TArgs&&... args)
    {
        return attr("array_equal")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object array_equiv(TArgs&&... args)
    {
        return attr("array_equiv")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object array_repr(TArgs&&... args)
    {
        return attr("array_repr")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object array_split(TArgs&&... args)
    {
        return attr("array_split")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object array_str(TArgs&&... args)
    {
        return attr("array_str")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object asanyarray(TArgs&&... args)
    {
        return attr("asanyarray")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object asarray(TArgs&&... args)
    {
        return attr("asarray")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object asarray_chkfinite(TArgs&&... args)
    {
        return attr("asarray_chkfinite")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ascontiguousarray(TArgs&&... args)
    {
        return attr("ascontiguousarray")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object asfarray(TArgs&&... args)
    {
        return attr("asfarray")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object asfortranarray(TArgs&&... args)
    {
        return attr("asfortranarray")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object asmatrix(TArgs&&... args)
    {
        return attr("asmatrix")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object asscalar(TArgs&&... args)
    {
        return attr("asscalar")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object atleast_1d(TArgs&&... args)
    {
        return attr("atleast_1d")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object atleast_2d(TArgs&&... args)
    {
        return attr("atleast_2d")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object atleast_3d(TArgs&&... args)
    {
        return attr("atleast_3d")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object average(TArgs&&... args)
    {
        return attr("average")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object bartlett(TArgs&&... args)
    {
        return attr("bartlett")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object base_repr(TArgs&&... args)
    {
        return attr("base_repr")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object binary_repr(TArgs&&... args)
    {
        return attr("binary_repr")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object bincount(TArgs&&... args)
    {
        return attr("bincount")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object bitwise_and(TArgs&&... args)
    {
        return attr("bitwise_and")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object bitwise_not(TArgs&&... args)
    {
        return attr("bitwise_not")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object bitwise_or(TArgs&&... args)
    {
        return attr("bitwise_or")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object bitwise_xor(TArgs&&... args)
    {
        return attr("bitwise_xor")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object blackman(TArgs&&... args)
    {
        return attr("blackman")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object block(TArgs&&... args)
    {
        return attr("block")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object bmat(TArgs&&... args)
    {
        return attr("bmat")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object broadcast_arrays(TArgs&&... args)
    {
        return attr("broadcast_arrays")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object broadcast_to(TArgs&&... args)
    {
        return attr("broadcast_to")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object busday_count(TArgs&&... args)
    {
        return attr("busday_count")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object busday_offset(TArgs&&... args)
    {
        return attr("busday_offset")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object byte_bounds(TArgs&&... args)
    {
        return attr("byte_bounds")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object can_cast(TArgs&&... args)
    {
        return attr("can_cast")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object cbrt(TArgs&&... args)
    {
        return attr("cbrt")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ceil(TArgs&&... args)
    {
        return attr("ceil")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object choose(TArgs&&... args)
    {
        return attr("choose")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object clip(TArgs&&... args)
    {
        return attr("clip")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object column_stack(TArgs&&... args)
    {
        return attr("column_stack")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object common_type(TArgs&&... args)
    {
        return attr("common_type")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object compare_chararrays(TArgs&&... args)
    {
        return attr("compare_chararrays")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object compress(TArgs&&... args)
    {
        return attr("compress")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object concatenate(TArgs&&... args)
    {
        return attr("concatenate")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object conj(TArgs&&... args)
    {
        return attr("conj")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object conjugate(TArgs&&... args)
    {
        return attr("conjugate")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object convolve(TArgs&&... args)
    {
        return attr("convolve")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object copy(TArgs&&... args)
    {
        return attr("copy")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object copysign(TArgs&&... args)
    {
        return attr("copysign")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object copyto(TArgs&&... args)
    {
        return attr("copyto")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object corrcoef(TArgs&&... args)
    {
        return attr("corrcoef")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object correlate(TArgs&&... args)
    {
        return attr("correlate")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object cos(TArgs&&... args)
    {
        return attr("cos")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object cosh(TArgs&&... args)
    {
        return attr("cosh")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object count_nonzero(TArgs&&... args)
    {
        return attr("count_nonzero")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object cov(TArgs&&... args)
    {
        return attr("cov")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object cross(TArgs&&... args)
    {
        return attr("cross")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object cumprod(TArgs&&... args)
    {
        return attr("cumprod")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object cumproduct(TArgs&&... args)
    {
        return attr("cumproduct")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object cumsum(TArgs&&... args)
    {
        return attr("cumsum")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object datetime_as_string(TArgs&&... args)
    {
        return attr("datetime_as_string")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object datetime_data(TArgs&&... args)
    {
        return attr("datetime_data")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object deg2rad(TArgs&&... args)
    {
        return attr("deg2rad")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object degrees(TArgs&&... args)
    {
        return attr("degrees")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object delete_(TArgs&&... args)
    {
        return attr("delete_")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object deprecate(TArgs&&... args)
    {
        return attr("deprecate")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object deprecate_with_doc(TArgs&&... args)
    {
        return attr("deprecate_with_doc")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object diag(TArgs&&... args)
    {
        return attr("diag")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object diag_indices(TArgs&&... args)
    {
        return attr("diag_indices")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object diag_indices_from(TArgs&&... args)
    {
        return attr("diag_indices_from")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object diagflat(TArgs&&... args)
    {
        return attr("diagflat")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object diagonal(TArgs&&... args)
    {
        return attr("diagonal")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object diff(TArgs&&... args)
    {
        return attr("diff")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object digitize(TArgs&&... args)
    {
        return attr("digitize")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object disp(TArgs&&... args)
    {
        return attr("disp")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object divide(TArgs&&... args)
    {
        return attr("divide")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object divmod(TArgs&&... args)
    {
        return attr("divmod")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object dot(TArgs&&... args)
    {
        return attr("dot")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object dsplit(TArgs&&... args)
    {
        return attr("dsplit")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object dstack(TArgs&&... args)
    {
        return attr("dstack")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ediff1d(TArgs&&... args)
    {
        return attr("ediff1d")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object einsum(TArgs&&... args)
    {
        return attr("einsum")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object einsum_path(TArgs&&... args)
    {
        return attr("einsum_path")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object empty(TArgs&&... args)
    {
        return attr("empty")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object empty_like(TArgs&&... args)
    {
        return attr("empty_like")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object equal(TArgs&&... args)
    {
        return attr("equal")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object exp(TArgs&&... args)
    {
        return attr("exp")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object exp2(TArgs&&... args)
    {
        return attr("exp2")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object expand_dims(TArgs&&... args)
    {
        return attr("expand_dims")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object expm1(TArgs&&... args)
    {
        return attr("expm1")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object extract(TArgs&&... args)
    {
        return attr("extract")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object eye(TArgs&&... args)
    {
        return attr("eye")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fabs(TArgs&&... args)
    {
        return attr("fabs")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fastCopyAndTranspose(TArgs&&... args)
    {
        return attr("fastCopyAndTranspose")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fill_diagonal(TArgs&&... args)
    {
        return attr("fill_diagonal")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object find_common_type(TArgs&&... args)
    {
        return attr("find_common_type")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fix(TArgs&&... args)
    {
        return attr("fix")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object flatnonzero(TArgs&&... args)
    {
        return attr("flatnonzero")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object flip(TArgs&&... args)
    {
        return attr("flip")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fliplr(TArgs&&... args)
    {
        return attr("fliplr")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object flipud(TArgs&&... args)
    {
        return attr("flipud")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object float_power(TArgs&&... args)
    {
        return attr("float_power")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object floor(TArgs&&... args)
    {
        return attr("floor")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object floor_divide(TArgs&&... args)
    {
        return attr("floor_divide")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fmax(TArgs&&... args)
    {
        return attr("fmax")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fmin(TArgs&&... args)
    {
        return attr("fmin")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fmod(TArgs&&... args)
    {
        return attr("fmod")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object format_float_positional(TArgs&&... args)
    {
        return attr("format_float_positional")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object format_float_scientific(TArgs&&... args)
    {
        return attr("format_float_scientific")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object frexp(TArgs&&... args)
    {
        return attr("frexp")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object frombuffer(TArgs&&... args)
    {
        return attr("frombuffer")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fromfile(TArgs&&... args)
    {
        return attr("fromfile")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fromfunction(TArgs&&... args)
    {
        return attr("fromfunction")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fromiter(TArgs&&... args)
    {
        return attr("fromiter")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object frompyfunc(TArgs&&... args)
    {
        return attr("frompyfunc")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fromregex(TArgs&&... args)
    {
        return attr("fromregex")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fromstring(TArgs&&... args)
    {
        return attr("fromstring")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object full(TArgs&&... args)
    {
        return attr("full")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object full_like(TArgs&&... args)
    {
        return attr("full_like")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object fv(TArgs&&... args)
    {
        return attr("fv")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object gcd(TArgs&&... args)
    {
        return attr("gcd")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object genfromtxt(TArgs&&... args)
    {
        return attr("genfromtxt")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object geomspace(TArgs&&... args)
    {
        return attr("geomspace")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object get_array_wrap(TArgs&&... args)
    {
        return attr("get_array_wrap")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object get_include(TArgs&&... args)
    {
        return attr("get_include")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object get_printoptions(TArgs&&... args)
    {
        return attr("get_printoptions")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object getbufsize(TArgs&&... args)
    {
        return attr("getbufsize")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object geterr(TArgs&&... args)
    {
        return attr("geterr")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object geterrcall(TArgs&&... args)
    {
        return attr("geterrcall")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object geterrobj(TArgs&&... args)
    {
        return attr("geterrobj")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object gradient(TArgs&&... args)
    {
        return attr("gradient")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object greater(TArgs&&... args)
    {
        return attr("greater")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object greater_equal(TArgs&&... args)
    {
        return attr("greater_equal")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object hamming(TArgs&&... args)
    {
        return attr("hamming")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object hanning(TArgs&&... args)
    {
        return attr("hanning")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object heaviside(TArgs&&... args)
    {
        return attr("heaviside")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object histogram(TArgs&&... args)
    {
        return attr("histogram")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object histogram2d(TArgs&&... args)
    {
        return attr("histogram2d")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object histogram_bin_edges(TArgs&&... args)
    {
        return attr("histogram_bin_edges")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object histogramdd(TArgs&&... args)
    {
        return attr("histogramdd")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object hsplit(TArgs&&... args)
    {
        return attr("hsplit")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object hstack(TArgs&&... args)
    {
        return attr("hstack")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object hypot(TArgs&&... args)
    {
        return attr("hypot")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object i0(TArgs&&... args)
    {
        return attr("i0")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object identity(TArgs&&... args)
    {
        return attr("identity")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object imag(TArgs&&... args)
    {
        return attr("imag")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object in1d(TArgs&&... args)
    {
        return attr("in1d")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object indices(TArgs&&... args)
    {
        return attr("indices")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object info(TArgs&&... args)
    {
        return attr("info")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object inner(TArgs&&... args)
    {
        return attr("inner")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object insert(TArgs&&... args)
    {
        return attr("insert")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object int_asbuffer(TArgs&&... args)
    {
        return attr("int_asbuffer")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object interp(TArgs&&... args)
    {
        return attr("interp")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object intersect1d(TArgs&&... args)
    {
        return attr("intersect1d")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object invert(TArgs&&... args)
    {
        return attr("invert")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ipmt(TArgs&&... args)
    {
        return attr("ipmt")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object irr(TArgs&&... args)
    {
        return attr("irr")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object is_busday(TArgs&&... args)
    {
        return attr("is_busday")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object isclose(TArgs&&... args)
    {
        return attr("isclose")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object iscomplex(TArgs&&... args)
    {
        return attr("iscomplex")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object iscomplexobj(TArgs&&... args)
    {
        return attr("iscomplexobj")(std::forward<TArgs>(args)...);
    }

#if !defined(isfinite)
    template <class... TArgs>
    pybind11::object isfinite(TArgs&&... args)
    {
        return attr("isfinite")(std::forward<TArgs>(args)...);
    }
#endif

    template <class... TArgs>
    pybind11::object call_isfinite(TArgs&&... args)
    {
        return attr("isfinite")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object isfortran(TArgs&&... args)
    {
        return attr("isfortran")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object isin(TArgs&&... args)
    {
        return attr("isin")(std::forward<TArgs>(args)...);
    }

#if !defined(isinf)
    template <class... TArgs>
    pybind11::object isinf(TArgs&&... args)
    {
        return attr("isinf")(std::forward<TArgs>(args)...);
    }
#endif

    template <class... TArgs>
    pybind11::object call_isinf(TArgs&&... args)
    {
        return attr("isinf")(std::forward<TArgs>(args)...);
    }

#if !defined(isnan)
    template <class... TArgs>
    pybind11::object isnan(TArgs&&... args)
    {
        return attr("isnan")(std::forward<TArgs>(args)...);
    }
#endif

    template <class... TArgs>
    pybind11::object call_isnan(TArgs&&... args)
    {
        return attr("isnan")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object isnat(TArgs&&... args)
    {
        return attr("isnat")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object isneginf(TArgs&&... args)
    {
        return attr("isneginf")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object isposinf(TArgs&&... args)
    {
        return attr("isposinf")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object isreal(TArgs&&... args)
    {
        return attr("isreal")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object isrealobj(TArgs&&... args)
    {
        return attr("isrealobj")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object isscalar(TArgs&&... args)
    {
        return attr("isscalar")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object issctype(TArgs&&... args)
    {
        return attr("issctype")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object issubclass_(TArgs&&... args)
    {
        return attr("issubclass_")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object issubdtype(TArgs&&... args)
    {
        return attr("issubdtype")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object issubsctype(TArgs&&... args)
    {
        return attr("issubsctype")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object iterable(TArgs&&... args)
    {
        return attr("iterable")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ix_(TArgs&&... args)
    {
        return attr("ix_")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object kaiser(TArgs&&... args)
    {
        return attr("kaiser")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object kron(TArgs&&... args)
    {
        return attr("kron")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object lcm(TArgs&&... args)
    {
        return attr("lcm")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ldexp(TArgs&&... args)
    {
        return attr("ldexp")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object left_shift(TArgs&&... args)
    {
        return attr("left_shift")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object less(TArgs&&... args)
    {
        return attr("less")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object less_equal(TArgs&&... args)
    {
        return attr("less_equal")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object lexsort(TArgs&&... args)
    {
        return attr("lexsort")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object linspace(TArgs&&... args)
    {
        return attr("linspace")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object load(TArgs&&... args)
    {
        return attr("load")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object loads(TArgs&&... args)
    {
        return attr("loads")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object loadtxt(TArgs&&... args)
    {
        return attr("loadtxt")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object log(TArgs&&... args)
    {
        return attr("log")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object log10(TArgs&&... args)
    {
        return attr("log10")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object log1p(TArgs&&... args)
    {
        return attr("log1p")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object log2(TArgs&&... args)
    {
        return attr("log2")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object logaddexp(TArgs&&... args)
    {
        return attr("logaddexp")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object logaddexp2(TArgs&&... args)
    {
        return attr("logaddexp2")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object logical_and(TArgs&&... args)
    {
        return attr("logical_and")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object logical_not(TArgs&&... args)
    {
        return attr("logical_not")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object logical_or(TArgs&&... args)
    {
        return attr("logical_or")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object logical_xor(TArgs&&... args)
    {
        return attr("logical_xor")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object logspace(TArgs&&... args)
    {
        return attr("logspace")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object lookfor(TArgs&&... args)
    {
        return attr("lookfor")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object mafromtxt(TArgs&&... args)
    {
        return attr("mafromtxt")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object mask_indices(TArgs&&... args)
    {
        return attr("mask_indices")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object mat(TArgs&&... args)
    {
        return attr("mat")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object matmul(TArgs&&... args)
    {
        return attr("matmul")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object max(TArgs&&... args)
    {
        return attr("max")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object maximum(TArgs&&... args)
    {
        return attr("maximum")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object maximum_sctype(TArgs&&... args)
    {
        return attr("maximum_sctype")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object may_share_memory(TArgs&&... args)
    {
        return attr("may_share_memory")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object mean(TArgs&&... args)
    {
        return attr("mean")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object median(TArgs&&... args)
    {
        return attr("median")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object meshgrid(TArgs&&... args)
    {
        return attr("meshgrid")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object min(TArgs&&... args)
    {
        return attr("min")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object min_scalar_type(TArgs&&... args)
    {
        return attr("min_scalar_type")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object minimum(TArgs&&... args)
    {
        return attr("minimum")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object mintypecode(TArgs&&... args)
    {
        return attr("mintypecode")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object mirr(TArgs&&... args)
    {
        return attr("mirr")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object mod(TArgs&&... args)
    {
        return attr("mod")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object modf(TArgs&&... args)
    {
        return attr("modf")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object moveaxis(TArgs&&... args)
    {
        return attr("moveaxis")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object msort(TArgs&&... args)
    {
        return attr("msort")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object multiply(TArgs&&... args)
    {
        return attr("multiply")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nan_to_num(TArgs&&... args)
    {
        return attr("nan_to_num")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nanargmax(TArgs&&... args)
    {
        return attr("nanargmax")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nanargmin(TArgs&&... args)
    {
        return attr("nanargmin")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nancumprod(TArgs&&... args)
    {
        return attr("nancumprod")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nancumsum(TArgs&&... args)
    {
        return attr("nancumsum")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nanmax(TArgs&&... args)
    {
        return attr("nanmax")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nanmean(TArgs&&... args)
    {
        return attr("nanmean")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nanmedian(TArgs&&... args)
    {
        return attr("nanmedian")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nanmin(TArgs&&... args)
    {
        return attr("nanmin")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nanpercentile(TArgs&&... args)
    {
        return attr("nanpercentile")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nanprod(TArgs&&... args)
    {
        return attr("nanprod")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nanquantile(TArgs&&... args)
    {
        return attr("nanquantile")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nanstd(TArgs&&... args)
    {
        return attr("nanstd")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nansum(TArgs&&... args)
    {
        return attr("nansum")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nanvar(TArgs&&... args)
    {
        return attr("nanvar")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ndfromtxt(TArgs&&... args)
    {
        return attr("ndfromtxt")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ndim(TArgs&&... args)
    {
        return attr("ndim")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object negative(TArgs&&... args)
    {
        return attr("negative")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nested_iters(TArgs&&... args)
    {
        return attr("nested_iters")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nextafter(TArgs&&... args)
    {
        return attr("nextafter")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nonzero(TArgs&&... args)
    {
        return attr("nonzero")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object not_equal(TArgs&&... args)
    {
        return attr("not_equal")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object nper(TArgs&&... args)
    {
        return attr("nper")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object npv(TArgs&&... args)
    {
        return attr("npv")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object obj2sctype(TArgs&&... args)
    {
        return attr("obj2sctype")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ones(TArgs&&... args)
    {
        return attr("ones")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ones_like(TArgs&&... args)
    {
        return attr("ones_like")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object outer(TArgs&&... args)
    {
        return attr("outer")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object packbits(TArgs&&... args)
    {
        return attr("packbits")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object pad(TArgs&&... args)
    {
        return attr("pad")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object partition(TArgs&&... args)
    {
        return attr("partition")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object percentile(TArgs&&... args)
    {
        return attr("percentile")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object piecewise(TArgs&&... args)
    {
        return attr("piecewise")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object pkgload(TArgs&&... args)
    {
        return attr("pkgload")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object place(TArgs&&... args)
    {
        return attr("place")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object pmt(TArgs&&... args)
    {
        return attr("pmt")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object poly(TArgs&&... args)
    {
        return attr("poly")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object polyadd(TArgs&&... args)
    {
        return attr("polyadd")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object polyder(TArgs&&... args)
    {
        return attr("polyder")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object polydiv(TArgs&&... args)
    {
        return attr("polydiv")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object polyfit(TArgs&&... args)
    {
        return attr("polyfit")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object polyint(TArgs&&... args)
    {
        return attr("polyint")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object polymul(TArgs&&... args)
    {
        return attr("polymul")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object polysub(TArgs&&... args)
    {
        return attr("polysub")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object polyval(TArgs&&... args)
    {
        return attr("polyval")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object positive(TArgs&&... args)
    {
        return attr("positive")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object power(TArgs&&... args)
    {
        return attr("power")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ppmt(TArgs&&... args)
    {
        return attr("ppmt")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object printoptions(TArgs&&... args)
    {
        return attr("printoptions")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object prod(TArgs&&... args)
    {
        return attr("prod")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object product(TArgs&&... args)
    {
        return attr("product")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object promote_types(TArgs&&... args)
    {
        return attr("promote_types")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ptp(TArgs&&... args)
    {
        return attr("ptp")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object put(TArgs&&... args)
    {
        return attr("put")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object put_along_axis(TArgs&&... args)
    {
        return attr("put_along_axis")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object putmask(TArgs&&... args)
    {
        return attr("putmask")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object pv(TArgs&&... args)
    {
        return attr("pv")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object quantile(TArgs&&... args)
    {
        return attr("quantile")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rad2deg(TArgs&&... args)
    {
        return attr("rad2deg")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object radians(TArgs&&... args)
    {
        return attr("radians")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rank(TArgs&&... args)
    {
        return attr("rank")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rate(TArgs&&... args)
    {
        return attr("rate")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ravel(TArgs&&... args)
    {
        return attr("ravel")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object ravel_multi_index(TArgs&&... args)
    {
        return attr("ravel_multi_index")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object real(TArgs&&... args)
    {
        return attr("real")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object real_if_close(TArgs&&... args)
    {
        return attr("real_if_close")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object recfromcsv(TArgs&&... args)
    {
        return attr("recfromcsv")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object recfromtxt(TArgs&&... args)
    {
        return attr("recfromtxt")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object reciprocal(TArgs&&... args)
    {
        return attr("reciprocal")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object remainder(TArgs&&... args)
    {
        return attr("remainder")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object repeat(TArgs&&... args)
    {
        return attr("repeat")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object require(TArgs&&... args)
    {
        return attr("require")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object reshape(TArgs&&... args)
    {
        return attr("reshape")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object resize(TArgs&&... args)
    {
        return attr("resize")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object result_type(TArgs&&... args)
    {
        return attr("result_type")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object right_shift(TArgs&&... args)
    {
        return attr("right_shift")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rint(TArgs&&... args)
    {
        return attr("rint")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object roll(TArgs&&... args)
    {
        return attr("roll")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rollaxis(TArgs&&... args)
    {
        return attr("rollaxis")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object roots(TArgs&&... args)
    {
        return attr("roots")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object rot90(TArgs&&... args)
    {
        return attr("rot90")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object round(TArgs&&... args)
    {
        return attr("round")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object round_(TArgs&&... args)
    {
        return attr("round_")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object row_stack(TArgs&&... args)
    {
        return attr("row_stack")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object safe_eval(TArgs&&... args)
    {
        return attr("safe_eval")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object save(TArgs&&... args)
    {
        return attr("save")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object savetxt(TArgs&&... args)
    {
        return attr("savetxt")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object savez(TArgs&&... args)
    {
        return attr("savez")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object savez_compressed(TArgs&&... args)
    {
        return attr("savez_compressed")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object sctype2char(TArgs&&... args)
    {
        return attr("sctype2char")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object searchsorted(TArgs&&... args)
    {
        return attr("searchsorted")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object select(TArgs&&... args)
    {
        return attr("select")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object set_numeric_ops(TArgs&&... args)
    {
        return attr("set_numeric_ops")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object set_printoptions(TArgs&&... args)
    {
        return attr("set_printoptions")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object set_string_function(TArgs&&... args)
    {
        return attr("set_string_function")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object setbufsize(TArgs&&... args)
    {
        return attr("setbufsize")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object setdiff1d(TArgs&&... args)
    {
        return attr("setdiff1d")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object seterr(TArgs&&... args)
    {
        return attr("seterr")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object seterrcall(TArgs&&... args)
    {
        return attr("seterrcall")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object seterrobj(TArgs&&... args)
    {
        return attr("seterrobj")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object setxor1d(TArgs&&... args)
    {
        return attr("setxor1d")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object shape(TArgs&&... args)
    {
        return attr("shape")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object shares_memory(TArgs&&... args)
    {
        return attr("shares_memory")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object show_config(TArgs&&... args)
    {
        return attr("show_config")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object sign(TArgs&&... args)
    {
        return attr("sign")(std::forward<TArgs>(args)...);
    }

#if !defined(signbit)
    template <class... TArgs>
    pybind11::object signbit(TArgs&&... args)
    {
        return attr("signbit")(std::forward<TArgs>(args)...);
    }
#endif

    template <class... TArgs>
    pybind11::object call_signbit(TArgs&&... args)
    {
        return attr("signbit")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object sin(TArgs&&... args)
    {
        return attr("sin")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object sinc(TArgs&&... args)
    {
        return attr("sinc")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object sinh(TArgs&&... args)
    {
        return attr("sinh")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object size(TArgs&&... args)
    {
        return attr("size")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object sometrue(TArgs&&... args)
    {
        return attr("sometrue")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object sort(TArgs&&... args)
    {
        return attr("sort")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object sort_complex(TArgs&&... args)
    {
        return attr("sort_complex")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object source(TArgs&&... args)
    {
        return attr("source")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object spacing(TArgs&&... args)
    {
        return attr("spacing")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object split(TArgs&&... args)
    {
        return attr("split")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object sqrt(TArgs&&... args)
    {
        return attr("sqrt")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object square(TArgs&&... args)
    {
        return attr("square")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object squeeze(TArgs&&... args)
    {
        return attr("squeeze")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object stack(TArgs&&... args)
    {
        return attr("stack")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object std(TArgs&&... args)
    {
        return attr("std")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object subtract(TArgs&&... args)
    {
        return attr("subtract")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object sum(TArgs&&... args)
    {
        return attr("sum")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object swapaxes(TArgs&&... args)
    {
        return attr("swapaxes")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object take(TArgs&&... args)
    {
        return attr("take")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object take_along_axis(TArgs&&... args)
    {
        return attr("take_along_axis")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object tan(TArgs&&... args)
    {
        return attr("tan")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object tanh(TArgs&&... args)
    {
        return attr("tanh")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object tensordot(TArgs&&... args)
    {
        return attr("tensordot")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object tile(TArgs&&... args)
    {
        return attr("tile")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object trace(TArgs&&... args)
    {
        return attr("trace")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object transpose(TArgs&&... args)
    {
        return attr("transpose")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object trapz(TArgs&&... args)
    {
        return attr("trapz")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object tri(TArgs&&... args)
    {
        return attr("tri")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object tril(TArgs&&... args)
    {
        return attr("tril")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object tril_indices(TArgs&&... args)
    {
        return attr("tril_indices")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object tril_indices_from(TArgs&&... args)
    {
        return attr("tril_indices_from")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object trim_zeros(TArgs&&... args)
    {
        return attr("trim_zeros")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object triu(TArgs&&... args)
    {
        return attr("triu")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object triu_indices(TArgs&&... args)
    {
        return attr("triu_indices")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object triu_indices_from(TArgs&&... args)
    {
        return attr("triu_indices_from")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object true_divide(TArgs&&... args)
    {
        return attr("true_divide")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object trunc(TArgs&&... args)
    {
        return attr("trunc")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object typename_(TArgs&&... args)
    {
        return attr("typename_")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object union1d(TArgs&&... args)
    {
        return attr("union1d")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object unique(TArgs&&... args)
    {
        return attr("unique")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object unpackbits(TArgs&&... args)
    {
        return attr("unpackbits")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object unravel_index(TArgs&&... args)
    {
        return attr("unravel_index")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object unwrap(TArgs&&... args)
    {
        return attr("unwrap")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object vander(TArgs&&... args)
    {
        return attr("vander")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object var(TArgs&&... args)
    {
        return attr("var")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object vdot(TArgs&&... args)
    {
        return attr("vdot")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object vsplit(TArgs&&... args)
    {
        return attr("vsplit")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object vstack(TArgs&&... args)
    {
        return attr("vstack")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object where(TArgs&&... args)
    {
        return attr("where")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object who(TArgs&&... args)
    {
        return attr("who")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object zeros(TArgs&&... args)
    {
        return attr("zeros")(std::forward<TArgs>(args)...);
    }

    template <class... TArgs>
    pybind11::object zeros_like(TArgs&&... args)
    {
        return attr("zeros_like")(std::forward<TArgs>(args)...);
    }
};

numpy_module import_numpy()
{
    return pybind11::module::import("numpy");
}
}
