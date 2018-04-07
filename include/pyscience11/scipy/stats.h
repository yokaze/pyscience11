//
//  stats.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
#pragma once
#include <pybind11/pybind11.h>

namespace scipy11 {
namespace scipy {

    class stats_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object anderson(TArgs&&... args)
        {
            return attr("anderson")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object anderson_ksamp(TArgs&&... args)
        {
            return attr("anderson_ksamp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ansari(TArgs&&... args)
        {
            return attr("ansari")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bartlett(TArgs&&... args)
        {
            return attr("bartlett")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bayes_mvs(TArgs&&... args)
        {
            return attr("bayes_mvs")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binned_statistic(TArgs&&... args)
        {
            return attr("binned_statistic")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binned_statistic_2d(TArgs&&... args)
        {
            return attr("binned_statistic_2d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binned_statistic_dd(TArgs&&... args)
        {
            return attr("binned_statistic_dd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object binom_test(TArgs&&... args)
        {
            return attr("binom_test")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object boxcox(TArgs&&... args)
        {
            return attr("boxcox")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object boxcox_llf(TArgs&&... args)
        {
            return attr("boxcox_llf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object boxcox_normmax(TArgs&&... args)
        {
            return attr("boxcox_normmax")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object boxcox_normplot(TArgs&&... args)
        {
            return attr("boxcox_normplot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chi2_contingency(TArgs&&... args)
        {
            return attr("chi2_contingency")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object chisquare(TArgs&&... args)
        {
            return attr("chisquare")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object circmean(TArgs&&... args)
        {
            return attr("circmean")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object circstd(TArgs&&... args)
        {
            return attr("circstd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object circvar(TArgs&&... args)
        {
            return attr("circvar")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object combine_pvalues(TArgs&&... args)
        {
            return attr("combine_pvalues")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cumfreq(TArgs&&... args)
        {
            return attr("cumfreq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object describe(TArgs&&... args)
        {
            return attr("describe")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object energy_distance(TArgs&&... args)
        {
            return attr("energy_distance")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object entropy(TArgs&&... args)
        {
            return attr("entropy")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object f_oneway(TArgs&&... args)
        {
            return attr("f_oneway")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object find_repeats(TArgs&&... args)
        {
            return attr("find_repeats")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fisher_exact(TArgs&&... args)
        {
            return attr("fisher_exact")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fligner(TArgs&&... args)
        {
            return attr("fligner")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object friedmanchisquare(TArgs&&... args)
        {
            return attr("friedmanchisquare")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gmean(TArgs&&... args)
        {
            return attr("gmean")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hmean(TArgs&&... args)
        {
            return attr("hmean")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object iqr(TArgs&&... args)
        {
            return attr("iqr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object itemfreq(TArgs&&... args)
        {
            return attr("itemfreq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object jarque_bera(TArgs&&... args)
        {
            return attr("jarque_bera")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kendalltau(TArgs&&... args)
        {
            return attr("kendalltau")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kruskal(TArgs&&... args)
        {
            return attr("kruskal")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ks_2samp(TArgs&&... args)
        {
            return attr("ks_2samp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kstat(TArgs&&... args)
        {
            return attr("kstat")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kstatvar(TArgs&&... args)
        {
            return attr("kstatvar")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kstest(TArgs&&... args)
        {
            return attr("kstest")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kurtosis(TArgs&&... args)
        {
            return attr("kurtosis")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kurtosistest(TArgs&&... args)
        {
            return attr("kurtosistest")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object levene(TArgs&&... args)
        {
            return attr("levene")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object linregress(TArgs&&... args)
        {
            return attr("linregress")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mannwhitneyu(TArgs&&... args)
        {
            return attr("mannwhitneyu")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object median_test(TArgs&&... args)
        {
            return attr("median_test")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mode(TArgs&&... args)
        {
            return attr("mode")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object moment(TArgs&&... args)
        {
            return attr("moment")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mood(TArgs&&... args)
        {
            return attr("mood")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object mvsdist(TArgs&&... args)
        {
            return attr("mvsdist")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object normaltest(TArgs&&... args)
        {
            return attr("normaltest")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object obrientransform(TArgs&&... args)
        {
            return attr("obrientransform")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pearsonr(TArgs&&... args)
        {
            return attr("pearsonr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object percentileofscore(TArgs&&... args)
        {
            return attr("percentileofscore")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pointbiserialr(TArgs&&... args)
        {
            return attr("pointbiserialr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object power_divergence(TArgs&&... args)
        {
            return attr("power_divergence")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ppcc_max(TArgs&&... args)
        {
            return attr("ppcc_max")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ppcc_plot(TArgs&&... args)
        {
            return attr("ppcc_plot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object probplot(TArgs&&... args)
        {
            return attr("probplot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rankdata(TArgs&&... args)
        {
            return attr("rankdata")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ranksums(TArgs&&... args)
        {
            return attr("ranksums")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object relfreq(TArgs&&... args)
        {
            return attr("relfreq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object scoreatpercentile(TArgs&&... args)
        {
            return attr("scoreatpercentile")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sem(TArgs&&... args)
        {
            return attr("sem")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object shapiro(TArgs&&... args)
        {
            return attr("shapiro")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sigmaclip(TArgs&&... args)
        {
            return attr("sigmaclip")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object skew(TArgs&&... args)
        {
            return attr("skew")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object skewtest(TArgs&&... args)
        {
            return attr("skewtest")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spearmanr(TArgs&&... args)
        {
            return attr("spearmanr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object theilslopes(TArgs&&... args)
        {
            return attr("theilslopes")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tiecorrect(TArgs&&... args)
        {
            return attr("tiecorrect")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tmax(TArgs&&... args)
        {
            return attr("tmax")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tmean(TArgs&&... args)
        {
            return attr("tmean")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tmin(TArgs&&... args)
        {
            return attr("tmin")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object trim1(TArgs&&... args)
        {
            return attr("trim1")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object trim_mean(TArgs&&... args)
        {
            return attr("trim_mean")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object trimboth(TArgs&&... args)
        {
            return attr("trimboth")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tsem(TArgs&&... args)
        {
            return attr("tsem")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tstd(TArgs&&... args)
        {
            return attr("tstd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ttest_1samp(TArgs&&... args)
        {
            return attr("ttest_1samp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ttest_ind(TArgs&&... args)
        {
            return attr("ttest_ind")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ttest_ind_from_stats(TArgs&&... args)
        {
            return attr("ttest_ind_from_stats")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ttest_rel(TArgs&&... args)
        {
            return attr("ttest_rel")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tvar(TArgs&&... args)
        {
            return attr("tvar")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object variation(TArgs&&... args)
        {
            return attr("variation")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object wasserstein_distance(TArgs&&... args)
        {
            return attr("wasserstein_distance")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object weightedtau(TArgs&&... args)
        {
            return attr("weightedtau")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object wilcoxon(TArgs&&... args)
        {
            return attr("wilcoxon")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object zmap(TArgs&&... args)
        {
            return attr("zmap")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object zscore(TArgs&&... args)
        {
            return attr("zscore")(std::forward<TArgs>(args)...);
        }
    };

    stats_module import_stats()
    {
        return pybind11::module::import("scipy.stats");
    }
}
}
