//
//  integrate.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
#pragma once
#include <pybind11/pybind11.h>

namespace scipy11 {
namespace scipy {

    class integrate_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object cumtrapz(TArgs&&... args)
        {
            return attr("cumtrapz")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dblquad(TArgs&&... args)
        {
            return attr("dblquad")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fixed_quad(TArgs&&... args)
        {
            return attr("fixed_quad")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object newton_cotes(TArgs&&... args)
        {
            return attr("newton_cotes")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nquad(TArgs&&... args)
        {
            return attr("nquad")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object odeint(TArgs&&... args)
        {
            return attr("odeint")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object quad(TArgs&&... args)
        {
            return attr("quad")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object quad_explain(TArgs&&... args)
        {
            return attr("quad_explain")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object quadrature(TArgs&&... args)
        {
            return attr("quadrature")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object romb(TArgs&&... args)
        {
            return attr("romb")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object romberg(TArgs&&... args)
        {
            return attr("romberg")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object simps(TArgs&&... args)
        {
            return attr("simps")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve_bvp(TArgs&&... args)
        {
            return attr("solve_bvp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve_ivp(TArgs&&... args)
        {
            return attr("solve_ivp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tplquad(TArgs&&... args)
        {
            return attr("tplquad")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object trapz(TArgs&&... args)
        {
            return attr("trapz")(std::forward<TArgs>(args)...);
        }
    };

    integrate_module import_integrate()
    {
        return pybind11::module::import("scipy.integrate");
    }
}
}
