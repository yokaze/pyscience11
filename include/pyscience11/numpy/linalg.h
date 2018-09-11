//
//  linalg.h
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
namespace numpy {

    class linalg_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object cholesky(TArgs&&... args)
        {
            return attr("cholesky")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cond(TArgs&&... args)
        {
            return attr("cond")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object det(TArgs&&... args)
        {
            return attr("det")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eig(TArgs&&... args)
        {
            return attr("eig")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eigh(TArgs&&... args)
        {
            return attr("eigh")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eigvals(TArgs&&... args)
        {
            return attr("eigvals")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eigvalsh(TArgs&&... args)
        {
            return attr("eigvalsh")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object inv(TArgs&&... args)
        {
            return attr("inv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lstsq(TArgs&&... args)
        {
            return attr("lstsq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object matrix_power(TArgs&&... args)
        {
            return attr("matrix_power")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object matrix_rank(TArgs&&... args)
        {
            return attr("matrix_rank")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object multi_dot(TArgs&&... args)
        {
            return attr("multi_dot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object norm(TArgs&&... args)
        {
            return attr("norm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pinv(TArgs&&... args)
        {
            return attr("pinv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object qr(TArgs&&... args)
        {
            return attr("qr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object slogdet(TArgs&&... args)
        {
            return attr("slogdet")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve(TArgs&&... args)
        {
            return attr("solve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object svd(TArgs&&... args)
        {
            return attr("svd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tensorinv(TArgs&&... args)
        {
            return attr("tensorinv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tensorsolve(TArgs&&... args)
        {
            return attr("tensorsolve")(std::forward<TArgs>(args)...);
        }
    };

    linalg_module import_linalg()
    {
        return pybind11::module::import("numpy.linalg");
    }
}
}
