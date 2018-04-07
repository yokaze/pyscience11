//
//  signal.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
#pragma once
#include <pybind11/pybind11.h>

namespace scipy11 {
namespace scipy {

    class signal_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object abcd_normalize(TArgs&&... args)
        {
            return attr("abcd_normalize")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object argrelextrema(TArgs&&... args)
        {
            return attr("argrelextrema")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object argrelmax(TArgs&&... args)
        {
            return attr("argrelmax")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object argrelmin(TArgs&&... args)
        {
            return attr("argrelmin")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object band_stop_obj(TArgs&&... args)
        {
            return attr("band_stop_obj")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object barthann(TArgs&&... args)
        {
            return attr("barthann")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bartlett(TArgs&&... args)
        {
            return attr("bartlett")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bessel(TArgs&&... args)
        {
            return attr("bessel")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object besselap(TArgs&&... args)
        {
            return attr("besselap")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bilinear(TArgs&&... args)
        {
            return attr("bilinear")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object blackman(TArgs&&... args)
        {
            return attr("blackman")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object blackmanharris(TArgs&&... args)
        {
            return attr("blackmanharris")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bode(TArgs&&... args)
        {
            return attr("bode")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bohman(TArgs&&... args)
        {
            return attr("bohman")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object boxcar(TArgs&&... args)
        {
            return attr("boxcar")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bspline(TArgs&&... args)
        {
            return attr("bspline")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object buttap(TArgs&&... args)
        {
            return attr("buttap")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object butter(TArgs&&... args)
        {
            return attr("butter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object buttord(TArgs&&... args)
        {
            return attr("buttord")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cascade(TArgs&&... args)
        {
            return attr("cascade")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cheb1ap(TArgs&&... args)
        {
            return attr("cheb1ap")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cheb1ord(TArgs&&... args)
        {
            return attr("cheb1ord")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cheb2ap(TArgs&&... args)
        {
            return attr("cheb2ap")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cheb2ord(TArgs&&... args)
        {
            return attr("cheb2ord")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chebwin(TArgs&&... args)
        {
            return attr("chebwin")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cheby1(TArgs&&... args)
        {
            return attr("cheby1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cheby2(TArgs&&... args)
        {
            return attr("cheby2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object check_COLA(TArgs&&... args)
        {
            return attr("check_COLA")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chirp(TArgs&&... args)
        {
            return attr("chirp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object choose_conv_method(TArgs&&... args)
        {
            return attr("choose_conv_method")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cmplx_sort(TArgs&&... args)
        {
            return attr("cmplx_sort")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object coherence(TArgs&&... args)
        {
            return attr("coherence")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cont2discrete(TArgs&&... args)
        {
            return attr("cont2discrete")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object convolve(TArgs&&... args)
        {
            return attr("convolve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object convolve2d(TArgs&&... args)
        {
            return attr("convolve2d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object correlate(TArgs&&... args)
        {
            return attr("correlate")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object correlate2d(TArgs&&... args)
        {
            return attr("correlate2d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cosine(TArgs&&... args)
        {
            return attr("cosine")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object csd(TArgs&&... args)
        {
            return attr("csd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cspline1d(TArgs&&... args)
        {
            return attr("cspline1d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cspline1d_eval(TArgs&&... args)
        {
            return attr("cspline1d_eval")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cspline2d(TArgs&&... args)
        {
            return attr("cspline2d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cubic(TArgs&&... args)
        {
            return attr("cubic")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cwt(TArgs&&... args)
        {
            return attr("cwt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object daub(TArgs&&... args)
        {
            return attr("daub")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dbode(TArgs&&... args)
        {
            return attr("dbode")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object decimate(TArgs&&... args)
        {
            return attr("decimate")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object deconvolve(TArgs&&... args)
        {
            return attr("deconvolve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object detrend(TArgs&&... args)
        {
            return attr("detrend")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dfreqresp(TArgs&&... args)
        {
            return attr("dfreqresp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dimpulse(TArgs&&... args)
        {
            return attr("dimpulse")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dlsim(TArgs&&... args)
        {
            return attr("dlsim")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dstep(TArgs&&... args)
        {
            return attr("dstep")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellip(TArgs&&... args)
        {
            return attr("ellip")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellipap(TArgs&&... args)
        {
            return attr("ellipap")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellipord(TArgs&&... args)
        {
            return attr("ellipord")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object exponential(TArgs&&... args)
        {
            return attr("exponential")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fftconvolve(TArgs&&... args)
        {
            return attr("fftconvolve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object filtfilt(TArgs&&... args)
        {
            return attr("filtfilt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object find_peaks_cwt(TArgs&&... args)
        {
            return attr("find_peaks_cwt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object findfreqs(TArgs&&... args)
        {
            return attr("findfreqs")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object firls(TArgs&&... args)
        {
            return attr("firls")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object firwin(TArgs&&... args)
        {
            return attr("firwin")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object firwin2(TArgs&&... args)
        {
            return attr("firwin2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object flattop(TArgs&&... args)
        {
            return attr("flattop")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object freqresp(TArgs&&... args)
        {
            return attr("freqresp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object freqs(TArgs&&... args)
        {
            return attr("freqs")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object freqs_zpk(TArgs&&... args)
        {
            return attr("freqs_zpk")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object freqz(TArgs&&... args)
        {
            return attr("freqz")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object freqz_zpk(TArgs&&... args)
        {
            return attr("freqz_zpk")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gauss_spline(TArgs&&... args)
        {
            return attr("gauss_spline")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gaussian(TArgs&&... args)
        {
            return attr("gaussian")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gausspulse(TArgs&&... args)
        {
            return attr("gausspulse")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object general_gaussian(TArgs&&... args)
        {
            return attr("general_gaussian")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_window(TArgs&&... args)
        {
            return attr("get_window")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object group_delay(TArgs&&... args)
        {
            return attr("group_delay")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hamming(TArgs&&... args)
        {
            return attr("hamming")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hann(TArgs&&... args)
        {
            return attr("hann")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hanning(TArgs&&... args)
        {
            return attr("hanning")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hilbert(TArgs&&... args)
        {
            return attr("hilbert")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hilbert2(TArgs&&... args)
        {
            return attr("hilbert2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object iirdesign(TArgs&&... args)
        {
            return attr("iirdesign")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object iirfilter(TArgs&&... args)
        {
            return attr("iirfilter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object iirnotch(TArgs&&... args)
        {
            return attr("iirnotch")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object iirpeak(TArgs&&... args)
        {
            return attr("iirpeak")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object impulse(TArgs&&... args)
        {
            return attr("impulse")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object impulse2(TArgs&&... args)
        {
            return attr("impulse2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object invres(TArgs&&... args)
        {
            return attr("invres")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object invresz(TArgs&&... args)
        {
            return attr("invresz")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object istft(TArgs&&... args)
        {
            return attr("istft")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kaiser(TArgs&&... args)
        {
            return attr("kaiser")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kaiser_atten(TArgs&&... args)
        {
            return attr("kaiser_atten")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kaiser_beta(TArgs&&... args)
        {
            return attr("kaiser_beta")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kaiserord(TArgs&&... args)
        {
            return attr("kaiserord")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lfilter(TArgs&&... args)
        {
            return attr("lfilter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lfilter_zi(TArgs&&... args)
        {
            return attr("lfilter_zi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lfiltic(TArgs&&... args)
        {
            return attr("lfiltic")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lombscargle(TArgs&&... args)
        {
            return attr("lombscargle")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lp2bp(TArgs&&... args)
        {
            return attr("lp2bp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lp2bs(TArgs&&... args)
        {
            return attr("lp2bs")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lp2hp(TArgs&&... args)
        {
            return attr("lp2hp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lp2lp(TArgs&&... args)
        {
            return attr("lp2lp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lsim(TArgs&&... args)
        {
            return attr("lsim")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lsim2(TArgs&&... args)
        {
            return attr("lsim2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object max_len_seq(TArgs&&... args)
        {
            return attr("max_len_seq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object medfilt(TArgs&&... args)
        {
            return attr("medfilt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object medfilt2d(TArgs&&... args)
        {
            return attr("medfilt2d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object minimum_phase(TArgs&&... args)
        {
            return attr("minimum_phase")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object morlet(TArgs&&... args)
        {
            return attr("morlet")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object normalize(TArgs&&... args)
        {
            return attr("normalize")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nuttall(TArgs&&... args)
        {
            return attr("nuttall")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object order_filter(TArgs&&... args)
        {
            return attr("order_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object parzen(TArgs&&... args)
        {
            return attr("parzen")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object periodogram(TArgs&&... args)
        {
            return attr("periodogram")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object place_poles(TArgs&&... args)
        {
            return attr("place_poles")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object qmf(TArgs&&... args)
        {
            return attr("qmf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object qspline1d(TArgs&&... args)
        {
            return attr("qspline1d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object qspline1d_eval(TArgs&&... args)
        {
            return attr("qspline1d_eval")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object qspline2d(TArgs&&... args)
        {
            return attr("qspline2d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object quadratic(TArgs&&... args)
        {
            return attr("quadratic")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object remez(TArgs&&... args)
        {
            return attr("remez")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object resample(TArgs&&... args)
        {
            return attr("resample")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object resample_poly(TArgs&&... args)
        {
            return attr("resample_poly")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object residue(TArgs&&... args)
        {
            return attr("residue")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object residuez(TArgs&&... args)
        {
            return attr("residuez")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ricker(TArgs&&... args)
        {
            return attr("ricker")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object savgol_coeffs(TArgs&&... args)
        {
            return attr("savgol_coeffs")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object savgol_filter(TArgs&&... args)
        {
            return attr("savgol_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sawtooth(TArgs&&... args)
        {
            return attr("sawtooth")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sepfir2d(TArgs&&... args)
        {
            return attr("sepfir2d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object slepian(TArgs&&... args)
        {
            return attr("slepian")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sos2tf(TArgs&&... args)
        {
            return attr("sos2tf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sos2zpk(TArgs&&... args)
        {
            return attr("sos2zpk")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sosfilt(TArgs&&... args)
        {
            return attr("sosfilt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sosfilt_zi(TArgs&&... args)
        {
            return attr("sosfilt_zi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sosfiltfilt(TArgs&&... args)
        {
            return attr("sosfiltfilt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sosfreqz(TArgs&&... args)
        {
            return attr("sosfreqz")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spectrogram(TArgs&&... args)
        {
            return attr("spectrogram")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spline_filter(TArgs&&... args)
        {
            return attr("spline_filter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object square(TArgs&&... args)
        {
            return attr("square")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ss2tf(TArgs&&... args)
        {
            return attr("ss2tf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ss2zpk(TArgs&&... args)
        {
            return attr("ss2zpk")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object step(TArgs&&... args)
        {
            return attr("step")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object step2(TArgs&&... args)
        {
            return attr("step2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object stft(TArgs&&... args)
        {
            return attr("stft")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sweep_poly(TArgs&&... args)
        {
            return attr("sweep_poly")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object symiirorder1(TArgs&&... args)
        {
            return attr("symiirorder1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object symiirorder2(TArgs&&... args)
        {
            return attr("symiirorder2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tf2sos(TArgs&&... args)
        {
            return attr("tf2sos")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tf2ss(TArgs&&... args)
        {
            return attr("tf2ss")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tf2zpk(TArgs&&... args)
        {
            return attr("tf2zpk")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object triang(TArgs&&... args)
        {
            return attr("triang")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tukey(TArgs&&... args)
        {
            return attr("tukey")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object unique_roots(TArgs&&... args)
        {
            return attr("unique_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object unit_impulse(TArgs&&... args)
        {
            return attr("unit_impulse")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object upfirdn(TArgs&&... args)
        {
            return attr("upfirdn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object vectorstrength(TArgs&&... args)
        {
            return attr("vectorstrength")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object welch(TArgs&&... args)
        {
            return attr("welch")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object wiener(TArgs&&... args)
        {
            return attr("wiener")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object zpk2sos(TArgs&&... args)
        {
            return attr("zpk2sos")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object zpk2ss(TArgs&&... args)
        {
            return attr("zpk2ss")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object zpk2tf(TArgs&&... args)
        {
            return attr("zpk2tf")(std::forward<TArgs>(args)...);
        }
    };

    signal_module import_signal()
    {
        return pybind11::module::import("scipy.signal");
    }
}
}
