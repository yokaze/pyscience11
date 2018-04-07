//
//  special.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
#pragma once
#include <pybind11/pybind11.h>

namespace scipy11 {
namespace scipy {

    class special_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object agm(TArgs&&... args)
        {
            return attr("agm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ai_zeros(TArgs&&... args)
        {
            return attr("ai_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object airy(TArgs&&... args)
        {
            return attr("airy")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object airye(TArgs&&... args)
        {
            return attr("airye")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object assoc_laguerre(TArgs&&... args)
        {
            return attr("assoc_laguerre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bdtr(TArgs&&... args)
        {
            return attr("bdtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bdtrc(TArgs&&... args)
        {
            return attr("bdtrc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bdtri(TArgs&&... args)
        {
            return attr("bdtri")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bdtrik(TArgs&&... args)
        {
            return attr("bdtrik")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bdtrin(TArgs&&... args)
        {
            return attr("bdtrin")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bei(TArgs&&... args)
        {
            return attr("bei")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bei_zeros(TArgs&&... args)
        {
            return attr("bei_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object beip(TArgs&&... args)
        {
            return attr("beip")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object beip_zeros(TArgs&&... args)
        {
            return attr("beip_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ber(TArgs&&... args)
        {
            return attr("ber")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ber_zeros(TArgs&&... args)
        {
            return attr("ber_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bernoulli(TArgs&&... args)
        {
            return attr("bernoulli")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object berp(TArgs&&... args)
        {
            return attr("berp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object berp_zeros(TArgs&&... args)
        {
            return attr("berp_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bessel_diff_formula(TArgs&&... args)
        {
            return attr("bessel_diff_formula")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object besselpoly(TArgs&&... args)
        {
            return attr("besselpoly")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object beta(TArgs&&... args)
        {
            return attr("beta")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object betainc(TArgs&&... args)
        {
            return attr("betainc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object betaincinv(TArgs&&... args)
        {
            return attr("betaincinv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object betaln(TArgs&&... args)
        {
            return attr("betaln")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bi_zeros(TArgs&&... args)
        {
            return attr("bi_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binom(TArgs&&... args)
        {
            return attr("binom")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object boxcox(TArgs&&... args)
        {
            return attr("boxcox")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object boxcox1p(TArgs&&... args)
        {
            return attr("boxcox1p")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object btdtr(TArgs&&... args)
        {
            return attr("btdtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object btdtri(TArgs&&... args)
        {
            return attr("btdtri")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object btdtria(TArgs&&... args)
        {
            return attr("btdtria")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object btdtrib(TArgs&&... args)
        {
            return attr("btdtrib")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object c_roots(TArgs&&... args)
        {
            return attr("c_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cbrt(TArgs&&... args)
        {
            return attr("cbrt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cg_roots(TArgs&&... args)
        {
            return attr("cg_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chdtr(TArgs&&... args)
        {
            return attr("chdtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chdtrc(TArgs&&... args)
        {
            return attr("chdtrc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chdtri(TArgs&&... args)
        {
            return attr("chdtri")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chdtriv(TArgs&&... args)
        {
            return attr("chdtriv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chebyc(TArgs&&... args)
        {
            return attr("chebyc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chebys(TArgs&&... args)
        {
            return attr("chebys")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chebyt(TArgs&&... args)
        {
            return attr("chebyt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chebyu(TArgs&&... args)
        {
            return attr("chebyu")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chndtr(TArgs&&... args)
        {
            return attr("chndtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chndtridf(TArgs&&... args)
        {
            return attr("chndtridf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chndtrinc(TArgs&&... args)
        {
            return attr("chndtrinc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chndtrix(TArgs&&... args)
        {
            return attr("chndtrix")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object clpmn(TArgs&&... args)
        {
            return attr("clpmn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object comb(TArgs&&... args)
        {
            return attr("comb")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cosdg(TArgs&&... args)
        {
            return attr("cosdg")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cosm1(TArgs&&... args)
        {
            return attr("cosm1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cotdg(TArgs&&... args)
        {
            return attr("cotdg")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dawsn(TArgs&&... args)
        {
            return attr("dawsn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object digamma(TArgs&&... args)
        {
            return attr("digamma")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object diric(TArgs&&... args)
        {
            return attr("diric")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellip_harm(TArgs&&... args)
        {
            return attr("ellip_harm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellip_harm_2(TArgs&&... args)
        {
            return attr("ellip_harm_2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellip_normal(TArgs&&... args)
        {
            return attr("ellip_normal")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellipe(TArgs&&... args)
        {
            return attr("ellipe")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellipeinc(TArgs&&... args)
        {
            return attr("ellipeinc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellipj(TArgs&&... args)
        {
            return attr("ellipj")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellipk(TArgs&&... args)
        {
            return attr("ellipk")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellipkinc(TArgs&&... args)
        {
            return attr("ellipkinc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ellipkm1(TArgs&&... args)
        {
            return attr("ellipkm1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object entr(TArgs&&... args)
        {
            return attr("entr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object erf(TArgs&&... args)
        {
            return attr("erf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object erf_zeros(TArgs&&... args)
        {
            return attr("erf_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object erfc(TArgs&&... args)
        {
            return attr("erfc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object erfcinv(TArgs&&... args)
        {
            return attr("erfcinv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object erfcx(TArgs&&... args)
        {
            return attr("erfcx")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object erfi(TArgs&&... args)
        {
            return attr("erfi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object erfinv(TArgs&&... args)
        {
            return attr("erfinv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object errprint(TArgs&&... args)
        {
            return attr("errprint")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object euler(TArgs&&... args)
        {
            return attr("euler")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_chebyc(TArgs&&... args)
        {
            return attr("eval_chebyc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_chebys(TArgs&&... args)
        {
            return attr("eval_chebys")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_chebyt(TArgs&&... args)
        {
            return attr("eval_chebyt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_chebyu(TArgs&&... args)
        {
            return attr("eval_chebyu")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_gegenbauer(TArgs&&... args)
        {
            return attr("eval_gegenbauer")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_genlaguerre(TArgs&&... args)
        {
            return attr("eval_genlaguerre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_hermite(TArgs&&... args)
        {
            return attr("eval_hermite")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_hermitenorm(TArgs&&... args)
        {
            return attr("eval_hermitenorm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_jacobi(TArgs&&... args)
        {
            return attr("eval_jacobi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_laguerre(TArgs&&... args)
        {
            return attr("eval_laguerre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_legendre(TArgs&&... args)
        {
            return attr("eval_legendre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_sh_chebyt(TArgs&&... args)
        {
            return attr("eval_sh_chebyt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_sh_chebyu(TArgs&&... args)
        {
            return attr("eval_sh_chebyu")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_sh_jacobi(TArgs&&... args)
        {
            return attr("eval_sh_jacobi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eval_sh_legendre(TArgs&&... args)
        {
            return attr("eval_sh_legendre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object exp1(TArgs&&... args)
        {
            return attr("exp1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object exp10(TArgs&&... args)
        {
            return attr("exp10")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object exp2(TArgs&&... args)
        {
            return attr("exp2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object expi(TArgs&&... args)
        {
            return attr("expi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object expit(TArgs&&... args)
        {
            return attr("expit")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object expm1(TArgs&&... args)
        {
            return attr("expm1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object expn(TArgs&&... args)
        {
            return attr("expn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object exprel(TArgs&&... args)
        {
            return attr("exprel")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object factorial(TArgs&&... args)
        {
            return attr("factorial")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object factorial2(TArgs&&... args)
        {
            return attr("factorial2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object factorialk(TArgs&&... args)
        {
            return attr("factorialk")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fdtr(TArgs&&... args)
        {
            return attr("fdtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fdtrc(TArgs&&... args)
        {
            return attr("fdtrc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fdtri(TArgs&&... args)
        {
            return attr("fdtri")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fdtridfd(TArgs&&... args)
        {
            return attr("fdtridfd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fresnel(TArgs&&... args)
        {
            return attr("fresnel")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fresnel_zeros(TArgs&&... args)
        {
            return attr("fresnel_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fresnelc_zeros(TArgs&&... args)
        {
            return attr("fresnelc_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fresnels_zeros(TArgs&&... args)
        {
            return attr("fresnels_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gamma(TArgs&&... args)
        {
            return attr("gamma")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gammainc(TArgs&&... args)
        {
            return attr("gammainc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gammaincc(TArgs&&... args)
        {
            return attr("gammaincc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gammainccinv(TArgs&&... args)
        {
            return attr("gammainccinv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gammaincinv(TArgs&&... args)
        {
            return attr("gammaincinv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gammaln(TArgs&&... args)
        {
            return attr("gammaln")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gammasgn(TArgs&&... args)
        {
            return attr("gammasgn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gdtr(TArgs&&... args)
        {
            return attr("gdtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gdtrc(TArgs&&... args)
        {
            return attr("gdtrc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gdtria(TArgs&&... args)
        {
            return attr("gdtria")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gdtrib(TArgs&&... args)
        {
            return attr("gdtrib")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gdtrix(TArgs&&... args)
        {
            return attr("gdtrix")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gegenbauer(TArgs&&... args)
        {
            return attr("gegenbauer")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object genlaguerre(TArgs&&... args)
        {
            return attr("genlaguerre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object geterr(TArgs&&... args)
        {
            return attr("geterr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object h1vp(TArgs&&... args)
        {
            return attr("h1vp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object h2vp(TArgs&&... args)
        {
            return attr("h2vp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object h_roots(TArgs&&... args)
        {
            return attr("h_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hankel1(TArgs&&... args)
        {
            return attr("hankel1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hankel1e(TArgs&&... args)
        {
            return attr("hankel1e")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hankel2(TArgs&&... args)
        {
            return attr("hankel2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hankel2e(TArgs&&... args)
        {
            return attr("hankel2e")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object he_roots(TArgs&&... args)
        {
            return attr("he_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hermite(TArgs&&... args)
        {
            return attr("hermite")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hermitenorm(TArgs&&... args)
        {
            return attr("hermitenorm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object huber(TArgs&&... args)
        {
            return attr("huber")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hyp0f1(TArgs&&... args)
        {
            return attr("hyp0f1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hyp1f1(TArgs&&... args)
        {
            return attr("hyp1f1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hyp1f2(TArgs&&... args)
        {
            return attr("hyp1f2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hyp2f0(TArgs&&... args)
        {
            return attr("hyp2f0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hyp2f1(TArgs&&... args)
        {
            return attr("hyp2f1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hyp3f0(TArgs&&... args)
        {
            return attr("hyp3f0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hyperu(TArgs&&... args)
        {
            return attr("hyperu")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object i0(TArgs&&... args)
        {
            return attr("i0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object i0e(TArgs&&... args)
        {
            return attr("i0e")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object i1(TArgs&&... args)
        {
            return attr("i1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object i1e(TArgs&&... args)
        {
            return attr("i1e")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object inv_boxcox(TArgs&&... args)
        {
            return attr("inv_boxcox")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object inv_boxcox1p(TArgs&&... args)
        {
            return attr("inv_boxcox1p")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object it2i0k0(TArgs&&... args)
        {
            return attr("it2i0k0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object it2j0y0(TArgs&&... args)
        {
            return attr("it2j0y0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object it2struve0(TArgs&&... args)
        {
            return attr("it2struve0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object itairy(TArgs&&... args)
        {
            return attr("itairy")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object iti0k0(TArgs&&... args)
        {
            return attr("iti0k0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object itj0y0(TArgs&&... args)
        {
            return attr("itj0y0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object itmodstruve0(TArgs&&... args)
        {
            return attr("itmodstruve0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object itstruve0(TArgs&&... args)
        {
            return attr("itstruve0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object iv(TArgs&&... args)
        {
            return attr("iv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ive(TArgs&&... args)
        {
            return attr("ive")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ivp(TArgs&&... args)
        {
            return attr("ivp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object j0(TArgs&&... args)
        {
            return attr("j0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object j1(TArgs&&... args)
        {
            return attr("j1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object j_roots(TArgs&&... args)
        {
            return attr("j_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object jacobi(TArgs&&... args)
        {
            return attr("jacobi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object jn(TArgs&&... args)
        {
            return attr("jn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object jn_zeros(TArgs&&... args)
        {
            return attr("jn_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object jnjnp_zeros(TArgs&&... args)
        {
            return attr("jnjnp_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object jnp_zeros(TArgs&&... args)
        {
            return attr("jnp_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object jnyn_zeros(TArgs&&... args)
        {
            return attr("jnyn_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object js_roots(TArgs&&... args)
        {
            return attr("js_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object jv(TArgs&&... args)
        {
            return attr("jv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object jve(TArgs&&... args)
        {
            return attr("jve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object jvp(TArgs&&... args)
        {
            return attr("jvp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object k0(TArgs&&... args)
        {
            return attr("k0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object k0e(TArgs&&... args)
        {
            return attr("k0e")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object k1(TArgs&&... args)
        {
            return attr("k1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object k1e(TArgs&&... args)
        {
            return attr("k1e")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kei(TArgs&&... args)
        {
            return attr("kei")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kei_zeros(TArgs&&... args)
        {
            return attr("kei_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object keip(TArgs&&... args)
        {
            return attr("keip")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object keip_zeros(TArgs&&... args)
        {
            return attr("keip_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kelvin(TArgs&&... args)
        {
            return attr("kelvin")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kelvin_zeros(TArgs&&... args)
        {
            return attr("kelvin_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ker(TArgs&&... args)
        {
            return attr("ker")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ker_zeros(TArgs&&... args)
        {
            return attr("ker_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kerp(TArgs&&... args)
        {
            return attr("kerp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kerp_zeros(TArgs&&... args)
        {
            return attr("kerp_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kl_div(TArgs&&... args)
        {
            return attr("kl_div")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kn(TArgs&&... args)
        {
            return attr("kn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kolmogi(TArgs&&... args)
        {
            return attr("kolmogi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kolmogorov(TArgs&&... args)
        {
            return attr("kolmogorov")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kv(TArgs&&... args)
        {
            return attr("kv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kve(TArgs&&... args)
        {
            return attr("kve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kvp(TArgs&&... args)
        {
            return attr("kvp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object l_roots(TArgs&&... args)
        {
            return attr("l_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object la_roots(TArgs&&... args)
        {
            return attr("la_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object laguerre(TArgs&&... args)
        {
            return attr("laguerre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lambertw(TArgs&&... args)
        {
            return attr("lambertw")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object legendre(TArgs&&... args)
        {
            return attr("legendre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lmbda(TArgs&&... args)
        {
            return attr("lmbda")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object log1p(TArgs&&... args)
        {
            return attr("log1p")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object log_ndtr(TArgs&&... args)
        {
            return attr("log_ndtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object loggamma(TArgs&&... args)
        {
            return attr("loggamma")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object logit(TArgs&&... args)
        {
            return attr("logit")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object logsumexp(TArgs&&... args)
        {
            return attr("logsumexp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lpmn(TArgs&&... args)
        {
            return attr("lpmn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lpmv(TArgs&&... args)
        {
            return attr("lpmv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lpn(TArgs&&... args)
        {
            return attr("lpn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lqmn(TArgs&&... args)
        {
            return attr("lqmn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lqn(TArgs&&... args)
        {
            return attr("lqn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mathieu_a(TArgs&&... args)
        {
            return attr("mathieu_a")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mathieu_b(TArgs&&... args)
        {
            return attr("mathieu_b")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mathieu_cem(TArgs&&... args)
        {
            return attr("mathieu_cem")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mathieu_even_coef(TArgs&&... args)
        {
            return attr("mathieu_even_coef")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mathieu_modcem1(TArgs&&... args)
        {
            return attr("mathieu_modcem1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mathieu_modcem2(TArgs&&... args)
        {
            return attr("mathieu_modcem2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mathieu_modsem1(TArgs&&... args)
        {
            return attr("mathieu_modsem1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mathieu_modsem2(TArgs&&... args)
        {
            return attr("mathieu_modsem2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mathieu_odd_coef(TArgs&&... args)
        {
            return attr("mathieu_odd_coef")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mathieu_sem(TArgs&&... args)
        {
            return attr("mathieu_sem")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object modfresnelm(TArgs&&... args)
        {
            return attr("modfresnelm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object modfresnelp(TArgs&&... args)
        {
            return attr("modfresnelp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object modstruve(TArgs&&... args)
        {
            return attr("modstruve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object multigammaln(TArgs&&... args)
        {
            return attr("multigammaln")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nbdtr(TArgs&&... args)
        {
            return attr("nbdtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nbdtrc(TArgs&&... args)
        {
            return attr("nbdtrc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nbdtri(TArgs&&... args)
        {
            return attr("nbdtri")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nbdtrik(TArgs&&... args)
        {
            return attr("nbdtrik")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nbdtrin(TArgs&&... args)
        {
            return attr("nbdtrin")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ncfdtr(TArgs&&... args)
        {
            return attr("ncfdtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ncfdtri(TArgs&&... args)
        {
            return attr("ncfdtri")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ncfdtridfd(TArgs&&... args)
        {
            return attr("ncfdtridfd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ncfdtridfn(TArgs&&... args)
        {
            return attr("ncfdtridfn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ncfdtrinc(TArgs&&... args)
        {
            return attr("ncfdtrinc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nctdtr(TArgs&&... args)
        {
            return attr("nctdtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nctdtridf(TArgs&&... args)
        {
            return attr("nctdtridf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nctdtrinc(TArgs&&... args)
        {
            return attr("nctdtrinc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nctdtrit(TArgs&&... args)
        {
            return attr("nctdtrit")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ndtr(TArgs&&... args)
        {
            return attr("ndtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ndtri(TArgs&&... args)
        {
            return attr("ndtri")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nrdtrimn(TArgs&&... args)
        {
            return attr("nrdtrimn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nrdtrisd(TArgs&&... args)
        {
            return attr("nrdtrisd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object obl_ang1(TArgs&&... args)
        {
            return attr("obl_ang1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object obl_ang1_cv(TArgs&&... args)
        {
            return attr("obl_ang1_cv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object obl_cv(TArgs&&... args)
        {
            return attr("obl_cv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object obl_cv_seq(TArgs&&... args)
        {
            return attr("obl_cv_seq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object obl_rad1(TArgs&&... args)
        {
            return attr("obl_rad1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object obl_rad1_cv(TArgs&&... args)
        {
            return attr("obl_rad1_cv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object obl_rad2(TArgs&&... args)
        {
            return attr("obl_rad2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object obl_rad2_cv(TArgs&&... args)
        {
            return attr("obl_rad2_cv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object p_roots(TArgs&&... args)
        {
            return attr("p_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pbdn_seq(TArgs&&... args)
        {
            return attr("pbdn_seq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pbdv(TArgs&&... args)
        {
            return attr("pbdv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pbdv_seq(TArgs&&... args)
        {
            return attr("pbdv_seq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pbvv(TArgs&&... args)
        {
            return attr("pbvv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pbvv_seq(TArgs&&... args)
        {
            return attr("pbvv_seq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pbwa(TArgs&&... args)
        {
            return attr("pbwa")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pdtr(TArgs&&... args)
        {
            return attr("pdtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pdtrc(TArgs&&... args)
        {
            return attr("pdtrc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pdtri(TArgs&&... args)
        {
            return attr("pdtri")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pdtrik(TArgs&&... args)
        {
            return attr("pdtrik")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object perm(TArgs&&... args)
        {
            return attr("perm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object poch(TArgs&&... args)
        {
            return attr("poch")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object polygamma(TArgs&&... args)
        {
            return attr("polygamma")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pro_ang1(TArgs&&... args)
        {
            return attr("pro_ang1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pro_ang1_cv(TArgs&&... args)
        {
            return attr("pro_ang1_cv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pro_cv(TArgs&&... args)
        {
            return attr("pro_cv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pro_cv_seq(TArgs&&... args)
        {
            return attr("pro_cv_seq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pro_rad1(TArgs&&... args)
        {
            return attr("pro_rad1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pro_rad1_cv(TArgs&&... args)
        {
            return attr("pro_rad1_cv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pro_rad2(TArgs&&... args)
        {
            return attr("pro_rad2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pro_rad2_cv(TArgs&&... args)
        {
            return attr("pro_rad2_cv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ps_roots(TArgs&&... args)
        {
            return attr("ps_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pseudo_huber(TArgs&&... args)
        {
            return attr("pseudo_huber")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object psi(TArgs&&... args)
        {
            return attr("psi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object radian(TArgs&&... args)
        {
            return attr("radian")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rel_entr(TArgs&&... args)
        {
            return attr("rel_entr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rgamma(TArgs&&... args)
        {
            return attr("rgamma")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object riccati_jn(TArgs&&... args)
        {
            return attr("riccati_jn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object riccati_yn(TArgs&&... args)
        {
            return attr("riccati_yn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_chebyc(TArgs&&... args)
        {
            return attr("roots_chebyc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_chebys(TArgs&&... args)
        {
            return attr("roots_chebys")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_chebyt(TArgs&&... args)
        {
            return attr("roots_chebyt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_chebyu(TArgs&&... args)
        {
            return attr("roots_chebyu")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_gegenbauer(TArgs&&... args)
        {
            return attr("roots_gegenbauer")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_genlaguerre(TArgs&&... args)
        {
            return attr("roots_genlaguerre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_hermite(TArgs&&... args)
        {
            return attr("roots_hermite")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_hermitenorm(TArgs&&... args)
        {
            return attr("roots_hermitenorm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_jacobi(TArgs&&... args)
        {
            return attr("roots_jacobi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_laguerre(TArgs&&... args)
        {
            return attr("roots_laguerre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_legendre(TArgs&&... args)
        {
            return attr("roots_legendre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_sh_chebyt(TArgs&&... args)
        {
            return attr("roots_sh_chebyt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_sh_chebyu(TArgs&&... args)
        {
            return attr("roots_sh_chebyu")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_sh_jacobi(TArgs&&... args)
        {
            return attr("roots_sh_jacobi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object roots_sh_legendre(TArgs&&... args)
        {
            return attr("roots_sh_legendre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object round(TArgs&&... args)
        {
            return attr("round")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object s_roots(TArgs&&... args)
        {
            return attr("s_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object seterr(TArgs&&... args)
        {
            return attr("seterr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sh_chebyt(TArgs&&... args)
        {
            return attr("sh_chebyt")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sh_chebyu(TArgs&&... args)
        {
            return attr("sh_chebyu")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sh_jacobi(TArgs&&... args)
        {
            return attr("sh_jacobi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sh_legendre(TArgs&&... args)
        {
            return attr("sh_legendre")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object shichi(TArgs&&... args)
        {
            return attr("shichi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sici(TArgs&&... args)
        {
            return attr("sici")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sinc(TArgs&&... args)
        {
            return attr("sinc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sindg(TArgs&&... args)
        {
            return attr("sindg")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object smirnov(TArgs&&... args)
        {
            return attr("smirnov")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object smirnovi(TArgs&&... args)
        {
            return attr("smirnovi")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spence(TArgs&&... args)
        {
            return attr("spence")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sph_harm(TArgs&&... args)
        {
            return attr("sph_harm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spherical_in(TArgs&&... args)
        {
            return attr("spherical_in")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spherical_jn(TArgs&&... args)
        {
            return attr("spherical_jn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spherical_kn(TArgs&&... args)
        {
            return attr("spherical_kn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spherical_yn(TArgs&&... args)
        {
            return attr("spherical_yn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object stdtr(TArgs&&... args)
        {
            return attr("stdtr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object stdtridf(TArgs&&... args)
        {
            return attr("stdtridf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object stdtrit(TArgs&&... args)
        {
            return attr("stdtrit")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object struve(TArgs&&... args)
        {
            return attr("struve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object t_roots(TArgs&&... args)
        {
            return attr("t_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tandg(TArgs&&... args)
        {
            return attr("tandg")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tklmbda(TArgs&&... args)
        {
            return attr("tklmbda")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ts_roots(TArgs&&... args)
        {
            return attr("ts_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object u_roots(TArgs&&... args)
        {
            return attr("u_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object us_roots(TArgs&&... args)
        {
            return attr("us_roots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object wofz(TArgs&&... args)
        {
            return attr("wofz")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object wrightomega(TArgs&&... args)
        {
            return attr("wrightomega")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object xlog1py(TArgs&&... args)
        {
            return attr("xlog1py")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object xlogy(TArgs&&... args)
        {
            return attr("xlogy")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object y0(TArgs&&... args)
        {
            return attr("y0")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object y0_zeros(TArgs&&... args)
        {
            return attr("y0_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object y1(TArgs&&... args)
        {
            return attr("y1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object y1_zeros(TArgs&&... args)
        {
            return attr("y1_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object y1p_zeros(TArgs&&... args)
        {
            return attr("y1p_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object yn(TArgs&&... args)
        {
            return attr("yn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object yn_zeros(TArgs&&... args)
        {
            return attr("yn_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ynp_zeros(TArgs&&... args)
        {
            return attr("ynp_zeros")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object yv(TArgs&&... args)
        {
            return attr("yv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object yve(TArgs&&... args)
        {
            return attr("yve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object yvp(TArgs&&... args)
        {
            return attr("yvp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object zeta(TArgs&&... args)
        {
            return attr("zeta")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object zetac(TArgs&&... args)
        {
            return attr("zetac")(std::forward<TArgs>(args)...);
        }
    };

    special_module import_special()
    {
        return pybind11::module::import("scipy.special");
    }
}
}
