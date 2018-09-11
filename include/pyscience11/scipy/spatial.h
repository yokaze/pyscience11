//
//  spatial.h
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

    class spatial_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object convex_hull_plot_2d(TArgs&&... args)
        {
            return attr("convex_hull_plot_2d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object delaunay_plot_2d(TArgs&&... args)
        {
            return attr("delaunay_plot_2d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object distance_matrix(TArgs&&... args)
        {
            return attr("distance_matrix")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object minkowski_distance(TArgs&&... args)
        {
            return attr("minkowski_distance")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object minkowski_distance_p(TArgs&&... args)
        {
            return attr("minkowski_distance_p")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object procrustes(TArgs&&... args)
        {
            return attr("procrustes")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tsearch(TArgs&&... args)
        {
            return attr("tsearch")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object voronoi_plot_2d(TArgs&&... args)
        {
            return attr("voronoi_plot_2d")(std::forward<TArgs>(args)...);
        }
    };

    spatial_module import_spatial()
    {
        return pybind11::module::import("scipy.spatial");
    }
}
}
