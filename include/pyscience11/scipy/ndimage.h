//
//  ndimage.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
//  This header is compatible with scipy 1.1.0.
//
#pragma once
#include <pybind11/pybind11.h>

namespace scipy11 {
namespace scipy {

    class ndimage_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object affine_transform(TArgs&&... args)
        {
            return attr("affine_transform")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binary_closing(TArgs&&... args)
        {
            return attr("binary_closing")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binary_dilation(TArgs&&... args)
        {
            return attr("binary_dilation")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binary_erosion(TArgs&&... args)
        {
            return attr("binary_erosion")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binary_fill_holes(TArgs&&... args)
        {
            return attr("binary_fill_holes")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binary_hit_or_miss(TArgs&&... args)
        {
            return attr("binary_hit_or_miss")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binary_opening(TArgs&&... args)
        {
            return attr("binary_opening")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binary_propagation(TArgs&&... args)
        {
            return attr("binary_propagation")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object black_tophat(TArgs&&... args)
        {
            return attr("black_tophat")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object center_of_mass(TArgs&&... args)
        {
            return attr("center_of_mass")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object convolve(TArgs&&... args)
        {
            return attr("convolve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object convolve1d(TArgs&&... args)
        {
            return attr("convolve1d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object correlate(TArgs&&... args)
        {
            return attr("correlate")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object correlate1d(TArgs&&... args)
        {
            return attr("correlate1d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object distance_transform_bf(TArgs&&... args)
        {
            return attr("distance_transform_bf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object distance_transform_cdt(TArgs&&... args)
        {
            return attr("distance_transform_cdt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object distance_transform_edt(TArgs&&... args)
        {
            return attr("distance_transform_edt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object extrema(TArgs&&... args)
        {
            return attr("extrema")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object find_objects(TArgs&&... args)
        {
            return attr("find_objects")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fourier_ellipsoid(TArgs&&... args)
        {
            return attr("fourier_ellipsoid")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fourier_gaussian(TArgs&&... args)
        {
            return attr("fourier_gaussian")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fourier_shift(TArgs&&... args)
        {
            return attr("fourier_shift")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fourier_uniform(TArgs&&... args)
        {
            return attr("fourier_uniform")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gaussian_filter(TArgs&&... args)
        {
            return attr("gaussian_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gaussian_filter1d(TArgs&&... args)
        {
            return attr("gaussian_filter1d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gaussian_gradient_magnitude(TArgs&&... args)
        {
            return attr("gaussian_gradient_magnitude")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gaussian_laplace(TArgs&&... args)
        {
            return attr("gaussian_laplace")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object generate_binary_structure(TArgs&&... args)
        {
            return attr("generate_binary_structure")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object generic_filter(TArgs&&... args)
        {
            return attr("generic_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object generic_filter1d(TArgs&&... args)
        {
            return attr("generic_filter1d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object generic_gradient_magnitude(TArgs&&... args)
        {
            return attr("generic_gradient_magnitude")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object generic_laplace(TArgs&&... args)
        {
            return attr("generic_laplace")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object geometric_transform(TArgs&&... args)
        {
            return attr("geometric_transform")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object grey_closing(TArgs&&... args)
        {
            return attr("grey_closing")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object grey_dilation(TArgs&&... args)
        {
            return attr("grey_dilation")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object grey_erosion(TArgs&&... args)
        {
            return attr("grey_erosion")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object grey_opening(TArgs&&... args)
        {
            return attr("grey_opening")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object histogram(TArgs&&... args)
        {
            return attr("histogram")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object imread(TArgs&&... args)
        {
            return attr("imread")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object iterate_structure(TArgs&&... args)
        {
            return attr("iterate_structure")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object label(TArgs&&... args)
        {
            return attr("label")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object labeled_comprehension(TArgs&&... args)
        {
            return attr("labeled_comprehension")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object laplace(TArgs&&... args)
        {
            return attr("laplace")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object map_coordinates(TArgs&&... args)
        {
            return attr("map_coordinates")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object maximum(TArgs&&... args)
        {
            return attr("maximum")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object maximum_filter(TArgs&&... args)
        {
            return attr("maximum_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object maximum_filter1d(TArgs&&... args)
        {
            return attr("maximum_filter1d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object maximum_position(TArgs&&... args)
        {
            return attr("maximum_position")(std::forward<TArgs>(args)...);
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
        pybind11::object median_filter(TArgs&&... args)
        {
            return attr("median_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object minimum(TArgs&&... args)
        {
            return attr("minimum")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object minimum_filter(TArgs&&... args)
        {
            return attr("minimum_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object minimum_filter1d(TArgs&&... args)
        {
            return attr("minimum_filter1d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object minimum_position(TArgs&&... args)
        {
            return attr("minimum_position")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object morphological_gradient(TArgs&&... args)
        {
            return attr("morphological_gradient")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object morphological_laplace(TArgs&&... args)
        {
            return attr("morphological_laplace")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object percentile_filter(TArgs&&... args)
        {
            return attr("percentile_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object prewitt(TArgs&&... args)
        {
            return attr("prewitt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rank_filter(TArgs&&... args)
        {
            return attr("rank_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rotate(TArgs&&... args)
        {
            return attr("rotate")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object shift(TArgs&&... args)
        {
            return attr("shift")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sobel(TArgs&&... args)
        {
            return attr("sobel")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spline_filter(TArgs&&... args)
        {
            return attr("spline_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spline_filter1d(TArgs&&... args)
        {
            return attr("spline_filter1d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object standard_deviation(TArgs&&... args)
        {
            return attr("standard_deviation")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sum(TArgs&&... args)
        {
            return attr("sum")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object uniform_filter(TArgs&&... args)
        {
            return attr("uniform_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object uniform_filter1d(TArgs&&... args)
        {
            return attr("uniform_filter1d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object variance(TArgs&&... args)
        {
            return attr("variance")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object watershed_ift(TArgs&&... args)
        {
            return attr("watershed_ift")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object white_tophat(TArgs&&... args)
        {
            return attr("white_tophat")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object zoom(TArgs&&... args)
        {
            return attr("zoom")(std::forward<TArgs>(args)...);
        }
    };

    ndimage_module import_ndimage()
    {
        return pybind11::module::import("scipy.ndimage");
    }
}
}
