//
//  random.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
#pragma once
#include <pybind11/pybind11.h>

namespace numpy11 {
namespace numpy {

    class random_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object Lock(TArgs&&... args)
        {
            return attr("Lock")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object __RandomState_ctor(TArgs&&... args)
        {
            return attr("__RandomState_ctor")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object _numpy_tester(TArgs&&... args)
        {
            return attr("_numpy_tester")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object beta(TArgs&&... args)
        {
            return attr("beta")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binomial(TArgs&&... args)
        {
            return attr("binomial")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bytes(TArgs&&... args)
        {
            return attr("bytes")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chisquare(TArgs&&... args)
        {
            return attr("chisquare")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object choice(TArgs&&... args)
        {
            return attr("choice")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dirichlet(TArgs&&... args)
        {
            return attr("dirichlet")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object exponential(TArgs&&... args)
        {
            return attr("exponential")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object f(TArgs&&... args)
        {
            return attr("f")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gamma(TArgs&&... args)
        {
            return attr("gamma")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object geometric(TArgs&&... args)
        {
            return attr("geometric")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_state(TArgs&&... args)
        {
            return attr("get_state")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gumbel(TArgs&&... args)
        {
            return attr("gumbel")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hypergeometric(TArgs&&... args)
        {
            return attr("hypergeometric")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object laplace(TArgs&&... args)
        {
            return attr("laplace")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object logistic(TArgs&&... args)
        {
            return attr("logistic")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lognormal(TArgs&&... args)
        {
            return attr("lognormal")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object logseries(TArgs&&... args)
        {
            return attr("logseries")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object multinomial(TArgs&&... args)
        {
            return attr("multinomial")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object multivariate_normal(TArgs&&... args)
        {
            return attr("multivariate_normal")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object negative_binomial(TArgs&&... args)
        {
            return attr("negative_binomial")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object noncentral_chisquare(TArgs&&... args)
        {
            return attr("noncentral_chisquare")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object noncentral_f(TArgs&&... args)
        {
            return attr("noncentral_f")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object normal(TArgs&&... args)
        {
            return attr("normal")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pareto(TArgs&&... args)
        {
            return attr("pareto")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object permutation(TArgs&&... args)
        {
            return attr("permutation")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object poisson(TArgs&&... args)
        {
            return attr("poisson")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object power(TArgs&&... args)
        {
            return attr("power")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rand(TArgs&&... args)
        {
            return attr("rand")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object randint(TArgs&&... args)
        {
            return attr("randint")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object randn(TArgs&&... args)
        {
            return attr("randn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object random(TArgs&&... args)
        {
            return attr("random")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object random_integers(TArgs&&... args)
        {
            return attr("random_integers")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object random_sample(TArgs&&... args)
        {
            return attr("random_sample")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ranf(TArgs&&... args)
        {
            return attr("ranf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rayleigh(TArgs&&... args)
        {
            return attr("rayleigh")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sample(TArgs&&... args)
        {
            return attr("sample")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object seed(TArgs&&... args)
        {
            return attr("seed")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object set_state(TArgs&&... args)
        {
            return attr("set_state")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object shuffle(TArgs&&... args)
        {
            return attr("shuffle")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object standard_cauchy(TArgs&&... args)
        {
            return attr("standard_cauchy")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object standard_exponential(TArgs&&... args)
        {
            return attr("standard_exponential")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object standard_gamma(TArgs&&... args)
        {
            return attr("standard_gamma")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object standard_normal(TArgs&&... args)
        {
            return attr("standard_normal")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object standard_t(TArgs&&... args)
        {
            return attr("standard_t")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object triangular(TArgs&&... args)
        {
            return attr("triangular")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object uniform(TArgs&&... args)
        {
            return attr("uniform")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object vonmises(TArgs&&... args)
        {
            return attr("vonmises")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object wald(TArgs&&... args)
        {
            return attr("wald")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object weibull(TArgs&&... args)
        {
            return attr("weibull")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object zipf(TArgs&&... args)
        {
            return attr("zipf")(std::forward<TArgs>(args)...);
        }
    };

    random_module import_random()
    {
        return pybind11::module::import("numpy.random");
    }
}
}
