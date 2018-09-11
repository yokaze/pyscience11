//
//  io.h
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

    class io_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object hb_read(TArgs&&... args)
        {
            return attr("hb_read")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hb_write(TArgs&&... args)
        {
            return attr("hb_write")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object loadmat(TArgs&&... args)
        {
            return attr("loadmat")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mminfo(TArgs&&... args)
        {
            return attr("mminfo")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mmread(TArgs&&... args)
        {
            return attr("mmread")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mmwrite(TArgs&&... args)
        {
            return attr("mmwrite")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object readsav(TArgs&&... args)
        {
            return attr("readsav")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object savemat(TArgs&&... args)
        {
            return attr("savemat")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object whosmat(TArgs&&... args)
        {
            return attr("whosmat")(std::forward<TArgs>(args)...);
        }
    };

    io_module import_io()
    {
        return pybind11::module::import("scipy.io");
    }
}
}
