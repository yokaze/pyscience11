//
//  fftpack.h
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

    class fftpack_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object cc_diff(TArgs&&... args)
        {
            return attr("cc_diff")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cs_diff(TArgs&&... args)
        {
            return attr("cs_diff")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dct(TArgs&&... args)
        {
            return attr("dct")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dctn(TArgs&&... args)
        {
            return attr("dctn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object diff(TArgs&&... args)
        {
            return attr("diff")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dst(TArgs&&... args)
        {
            return attr("dst")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dstn(TArgs&&... args)
        {
            return attr("dstn")(std::forward<TArgs>(args)...);
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
        pybind11::object hilbert(TArgs&&... args)
        {
            return attr("hilbert")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object idct(TArgs&&... args)
        {
            return attr("idct")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object idctn(TArgs&&... args)
        {
            return attr("idctn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object idst(TArgs&&... args)
        {
            return attr("idst")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object idstn(TArgs&&... args)
        {
            return attr("idstn")(std::forward<TArgs>(args)...);
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
        pybind11::object ihilbert(TArgs&&... args)
        {
            return attr("ihilbert")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object irfft(TArgs&&... args)
        {
            return attr("irfft")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object itilbert(TArgs&&... args)
        {
            return attr("itilbert")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object next_fast_len(TArgs&&... args)
        {
            return attr("next_fast_len")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rfft(TArgs&&... args)
        {
            return attr("rfft")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rfftfreq(TArgs&&... args)
        {
            return attr("rfftfreq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sc_diff(TArgs&&... args)
        {
            return attr("sc_diff")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object shift(TArgs&&... args)
        {
            return attr("shift")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ss_diff(TArgs&&... args)
        {
            return attr("ss_diff")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tilbert(TArgs&&... args)
        {
            return attr("tilbert")(std::forward<TArgs>(args)...);
        }
    };

    fftpack_module import_fftpack()
    {
        return pybind11::module::import("scipy.fftpack");
    }
}
}
