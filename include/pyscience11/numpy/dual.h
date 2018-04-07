//
//  dual.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
#pragma once
#include <pybind11/pybind11.h>

namespace numpy11 {
namespace numpy {

    class dual_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object cholesky(TArgs&&... args)
        {
            return attr("cholesky")(std::forward<TArgs>(args)...);
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
        pybind11::object fft(TArgs&&... args)
        {
            return attr("fft")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fft2(TArgs&&... args)
        {
            return attr("fft2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fftn(TArgs&&... args)
        {
            return attr("fftn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object i0(TArgs&&... args)
        {
            return attr("i0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ifft(TArgs&&... args)
        {
            return attr("ifft")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ifft2(TArgs&&... args)
        {
            return attr("ifft2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ifftn(TArgs&&... args)
        {
            return attr("ifftn")(std::forward<TArgs>(args)...);
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
        pybind11::object register_func(TArgs&&... args)
        {
            return attr("register_func")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object restore_all(TArgs&&... args)
        {
            return attr("restore_all")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object restore_func(TArgs&&... args)
        {
            return attr("restore_func")(std::forward<TArgs>(args)...);
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
    };

    dual_module import_dual()
    {
        return pybind11::module::import("numpy.dual");
    }
}
}
