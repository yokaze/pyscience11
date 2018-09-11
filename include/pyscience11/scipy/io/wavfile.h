//
//  wavfile.h
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
    namespace io {

        class wavfile_module : public pybind11::module {
        public:
            using pybind11::module::module;

            template <class... TArgs>
            pybind11::object _array_tofile(TArgs&&... args)
            {
                return attr("_array_tofile")(std::forward<TArgs>(args)...);
            }

            template <class... TArgs>
            pybind11::object _read_data_chunk(TArgs&&... args)
            {
                return attr("_read_data_chunk")(std::forward<TArgs>(args)...);
            }

            template <class... TArgs>
            pybind11::object _read_fmt_chunk(TArgs&&... args)
            {
                return attr("_read_fmt_chunk")(std::forward<TArgs>(args)...);
            }

            template <class... TArgs>
            pybind11::object _read_riff_chunk(TArgs&&... args)
            {
                return attr("_read_riff_chunk")(std::forward<TArgs>(args)...);
            }

            template <class... TArgs>
            pybind11::object _skip_unknown_chunk(TArgs&&... args)
            {
                return attr("_skip_unknown_chunk")(std::forward<TArgs>(args)...);
            }

            template <class... TArgs>
            pybind11::object read(TArgs&&... args)
            {
                return attr("read")(std::forward<TArgs>(args)...);
            }

            template <class... TArgs>
            pybind11::object write(TArgs&&... args)
            {
                return attr("write")(std::forward<TArgs>(args)...);
            }
        };

        wavfile_module import_wavfile()
        {
            return pybind11::module::import("scipy.io.wavfile");
        }
    }
}
}
