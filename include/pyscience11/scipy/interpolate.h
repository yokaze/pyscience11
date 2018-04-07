//
//  interpolate.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
#pragma once
#include <pybind11/pybind11.h>

namespace scipy11 {
namespace scipy {

    class interpolate_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object approximate_taylor_polynomial(TArgs&&... args)
        {
            return attr("approximate_taylor_polynomial")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object barycentric_interpolate(TArgs&&... args)
        {
            return attr("barycentric_interpolate")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bisplev(TArgs&&... args)
        {
            return attr("bisplev")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bisplrep(TArgs&&... args)
        {
            return attr("bisplrep")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object griddata(TArgs&&... args)
        {
            return attr("griddata")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object insert(TArgs&&... args)
        {
            return attr("insert")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object interpn(TArgs&&... args)
        {
            return attr("interpn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object krogh_interpolate(TArgs&&... args)
        {
            return attr("krogh_interpolate")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lagrange(TArgs&&... args)
        {
            return attr("lagrange")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object make_interp_spline(TArgs&&... args)
        {
            return attr("make_interp_spline")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object make_lsq_spline(TArgs&&... args)
        {
            return attr("make_lsq_spline")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pade(TArgs&&... args)
        {
            return attr("pade")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pchip_interpolate(TArgs&&... args)
        {
            return attr("pchip_interpolate")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spalde(TArgs&&... args)
        {
            return attr("spalde")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object splantider(TArgs&&... args)
        {
            return attr("splantider")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object splder(TArgs&&... args)
        {
            return attr("splder")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object splev(TArgs&&... args)
        {
            return attr("splev")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spleval(TArgs&&... args)
        {
            return attr("spleval")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spline(TArgs&&... args)
        {
            return attr("spline")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object splint(TArgs&&... args)
        {
            return attr("splint")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object splmake(TArgs&&... args)
        {
            return attr("splmake")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object splprep(TArgs&&... args)
        {
            return attr("splprep")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object splrep(TArgs&&... args)
        {
            return attr("splrep")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spltopp(TArgs&&... args)
        {
            return attr("spltopp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sproot(TArgs&&... args)
        {
            return attr("sproot")(std::forward<TArgs>(args)...);
        }
    };

    interpolate_module import_interpolate()
    {
        return pybind11::module::import("scipy.interpolate");
    }
}
}
