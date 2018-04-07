//
//  optimize.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
#pragma once
#include <pybind11/pybind11.h>

namespace scipy11 {
namespace scipy {

    class optimize_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object anderson(TArgs&&... args)
        {
            return attr("anderson")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object approx_fprime(TArgs&&... args)
        {
            return attr("approx_fprime")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object basinhopping(TArgs&&... args)
        {
            return attr("basinhopping")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bisect(TArgs&&... args)
        {
            return attr("bisect")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bracket(TArgs&&... args)
        {
            return attr("bracket")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object brent(TArgs&&... args)
        {
            return attr("brent")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object brenth(TArgs&&... args)
        {
            return attr("brenth")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object brentq(TArgs&&... args)
        {
            return attr("brentq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object broyden1(TArgs&&... args)
        {
            return attr("broyden1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object broyden2(TArgs&&... args)
        {
            return attr("broyden2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object brute(TArgs&&... args)
        {
            return attr("brute")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object check_grad(TArgs&&... args)
        {
            return attr("check_grad")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object curve_fit(TArgs&&... args)
        {
            return attr("curve_fit")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object diagbroyden(TArgs&&... args)
        {
            return attr("diagbroyden")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object differential_evolution(TArgs&&... args)
        {
            return attr("differential_evolution")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object excitingmixing(TArgs&&... args)
        {
            return attr("excitingmixing")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fixed_point(TArgs&&... args)
        {
            return attr("fixed_point")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fmin(TArgs&&... args)
        {
            return attr("fmin")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fmin_bfgs(TArgs&&... args)
        {
            return attr("fmin_bfgs")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fmin_cg(TArgs&&... args)
        {
            return attr("fmin_cg")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fmin_cobyla(TArgs&&... args)
        {
            return attr("fmin_cobyla")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fmin_l_bfgs_b(TArgs&&... args)
        {
            return attr("fmin_l_bfgs_b")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fmin_ncg(TArgs&&... args)
        {
            return attr("fmin_ncg")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fmin_powell(TArgs&&... args)
        {
            return attr("fmin_powell")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fmin_slsqp(TArgs&&... args)
        {
            return attr("fmin_slsqp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fmin_tnc(TArgs&&... args)
        {
            return attr("fmin_tnc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fminbound(TArgs&&... args)
        {
            return attr("fminbound")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fsolve(TArgs&&... args)
        {
            return attr("fsolve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object golden(TArgs&&... args)
        {
            return attr("golden")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object least_squares(TArgs&&... args)
        {
            return attr("least_squares")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object leastsq(TArgs&&... args)
        {
            return attr("leastsq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object line_search(TArgs&&... args)
        {
            return attr("line_search")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object linear_sum_assignment(TArgs&&... args)
        {
            return attr("linear_sum_assignment")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object linearmixing(TArgs&&... args)
        {
            return attr("linearmixing")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object linprog(TArgs&&... args)
        {
            return attr("linprog")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object linprog_verbose_callback(TArgs&&... args)
        {
            return attr("linprog_verbose_callback")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lsq_linear(TArgs&&... args)
        {
            return attr("lsq_linear")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object minimize(TArgs&&... args)
        {
            return attr("minimize")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object minimize_scalar(TArgs&&... args)
        {
            return attr("minimize_scalar")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object newton(TArgs&&... args)
        {
            return attr("newton")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object newton_krylov(TArgs&&... args)
        {
            return attr("newton_krylov")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nnls(TArgs&&... args)
        {
            return attr("nnls")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ridder(TArgs&&... args)
        {
            return attr("ridder")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object root(TArgs&&... args)
        {
            return attr("root")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rosen(TArgs&&... args)
        {
            return attr("rosen")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rosen_der(TArgs&&... args)
        {
            return attr("rosen_der")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rosen_hess(TArgs&&... args)
        {
            return attr("rosen_hess")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rosen_hess_prod(TArgs&&... args)
        {
            return attr("rosen_hess_prod")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object show_options(TArgs&&... args)
        {
            return attr("show_options")(std::forward<TArgs>(args)...);
        }
    };

    optimize_module import_optimize()
    {
        return pybind11::module::import("scipy.optimize");
    }
}
}
