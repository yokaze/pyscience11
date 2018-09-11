//
//  fft.h
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

    class fft_module : public pybind11::module {
    public:
        using pybind11::module::module;

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
        pybind11::object fftfreq(TArgs&&... args)
        {
            return attr("fftfreq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fftn(TArgs&&... args)
        {
            return attr("fftn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fftshift(TArgs&&... args)
        {
            return attr("fftshift")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hfft(TArgs&&... args)
        {
            return attr("hfft")(std::forward<TArgs>(args)...);
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
        pybind11::object ifftshift(TArgs&&... args)
        {
            return attr("ifftshift")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ihfft(TArgs&&... args)
        {
            return attr("ihfft")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object irfft(TArgs&&... args)
        {
            return attr("irfft")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object irfft2(TArgs&&... args)
        {
            return attr("irfft2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object irfftn(TArgs&&... args)
        {
            return attr("irfftn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rfft(TArgs&&... args)
        {
            return attr("rfft")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rfft2(TArgs&&... args)
        {
            return attr("rfft2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rfftfreq(TArgs&&... args)
        {
            return attr("rfftfreq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rfftn(TArgs&&... args)
        {
            return attr("rfftn")(std::forward<TArgs>(args)...);
        }
    };

    fft_module import_fft()
    {
        return pybind11::module::import("numpy.fft");
    }
}
}
