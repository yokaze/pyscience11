//
//  pyplot.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
//  This header is compatible with matplotlib 2.2.3.
//
#pragma once
#include <pybind11/pybind11.h>

namespace matplotlib11 {
namespace matplotlib {

    class pyplot_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object _auto_draw_if_interactive(TArgs&&... args)
        {
            return attr("_auto_draw_if_interactive")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object _autogen_docstring(TArgs&&... args)
        {
            return attr("_autogen_docstring")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object _backend_selection(TArgs&&... args)
        {
            return attr("_backend_selection")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object _imread(TArgs&&... args)
        {
            return attr("_imread")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object _imsave(TArgs&&... args)
        {
            return attr("_imsave")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object _setp(TArgs&&... args)
        {
            return attr("_setp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object _setup_pyplot_info_docstrings(TArgs&&... args)
        {
            return attr("_setup_pyplot_info_docstrings")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object _string_to_bool(TArgs&&... args)
        {
            return attr("_string_to_bool")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object acorr(TArgs&&... args)
        {
            return attr("acorr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object angle_spectrum(TArgs&&... args)
        {
            return attr("angle_spectrum")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object annotate(TArgs&&... args)
        {
            return attr("annotate")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object arrow(TArgs&&... args)
        {
            return attr("arrow")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object autoscale(TArgs&&... args)
        {
            return attr("autoscale")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object autumn(TArgs&&... args)
        {
            return attr("autumn")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object axes(TArgs&&... args)
        {
            return attr("axes")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object axhline(TArgs&&... args)
        {
            return attr("axhline")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object axhspan(TArgs&&... args)
        {
            return attr("axhspan")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object axis(TArgs&&... args)
        {
            return attr("axis")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object axvline(TArgs&&... args)
        {
            return attr("axvline")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object axvspan(TArgs&&... args)
        {
            return attr("axvspan")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bar(TArgs&&... args)
        {
            return attr("bar")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object barbs(TArgs&&... args)
        {
            return attr("barbs")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object barh(TArgs&&... args)
        {
            return attr("barh")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object bone(TArgs&&... args)
        {
            return attr("bone")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object box(TArgs&&... args)
        {
            return attr("box")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object boxplot(TArgs&&... args)
        {
            return attr("boxplot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object broken_barh(TArgs&&... args)
        {
            return attr("broken_barh")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cla(TArgs&&... args)
        {
            return attr("cla")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object clabel(TArgs&&... args)
        {
            return attr("clabel")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object clf(TArgs&&... args)
        {
            return attr("clf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object clim(TArgs&&... args)
        {
            return attr("clim")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object close(TArgs&&... args)
        {
            return attr("close")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cohere(TArgs&&... args)
        {
            return attr("cohere")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object colorbar(TArgs&&... args)
        {
            return attr("colorbar")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object colormaps(TArgs&&... args)
        {
            return attr("colormaps")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object colors(TArgs&&... args)
        {
            return attr("colors")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object connect(TArgs&&... args)
        {
            return attr("connect")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object contour(TArgs&&... args)
        {
            return attr("contour")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object contourf(TArgs&&... args)
        {
            return attr("contourf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cool(TArgs&&... args)
        {
            return attr("cool")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object copper(TArgs&&... args)
        {
            return attr("copper")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object csd(TArgs&&... args)
        {
            return attr("csd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cycler(TArgs&&... args)
        {
            return attr("cycler")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dedent(TArgs&&... args)
        {
            return attr("dedent")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object delaxes(TArgs&&... args)
        {
            return attr("delaxes")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object deprecated(TArgs&&... args)
        {
            return attr("deprecated")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object disconnect(TArgs&&... args)
        {
            return attr("disconnect")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object draw(TArgs&&... args)
        {
            return attr("draw")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object errorbar(TArgs&&... args)
        {
            return attr("errorbar")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eventplot(TArgs&&... args)
        {
            return attr("eventplot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object figaspect(TArgs&&... args)
        {
            return attr("figaspect")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object figimage(TArgs&&... args)
        {
            return attr("figimage")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object figlegend(TArgs&&... args)
        {
            return attr("figlegend")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fignum_exists(TArgs&&... args)
        {
            return attr("fignum_exists")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object figtext(TArgs&&... args)
        {
            return attr("figtext")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object figure(TArgs&&... args)
        {
            return attr("figure")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fill(TArgs&&... args)
        {
            return attr("fill")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fill_between(TArgs&&... args)
        {
            return attr("fill_between")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fill_betweenx(TArgs&&... args)
        {
            return attr("fill_betweenx")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object findobj(TArgs&&... args)
        {
            return attr("findobj")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object flag(TArgs&&... args)
        {
            return attr("flag")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gca(TArgs&&... args)
        {
            return attr("gca")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gcf(TArgs&&... args)
        {
            return attr("gcf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gci(TArgs&&... args)
        {
            return attr("gci")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get(TArgs&&... args)
        {
            return attr("get")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_backend(TArgs&&... args)
        {
            return attr("get_backend")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_cmap(TArgs&&... args)
        {
            return attr("get_cmap")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_current_fig_manager(TArgs&&... args)
        {
            return attr("get_current_fig_manager")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_figlabels(TArgs&&... args)
        {
            return attr("get_figlabels")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_fignums(TArgs&&... args)
        {
            return attr("get_fignums")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_plot_commands(TArgs&&... args)
        {
            return attr("get_plot_commands")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_scale_docs(TArgs&&... args)
        {
            return attr("get_scale_docs")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_scale_names(TArgs&&... args)
        {
            return attr("get_scale_names")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object getp(TArgs&&... args)
        {
            return attr("getp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ginput(TArgs&&... args)
        {
            return attr("ginput")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object gray(TArgs&&... args)
        {
            return attr("gray")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object grid(TArgs&&... args)
        {
            return attr("grid")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hexbin(TArgs&&... args)
        {
            return attr("hexbin")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hist(TArgs&&... args)
        {
            return attr("hist")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hist2d(TArgs&&... args)
        {
            return attr("hist2d")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hlines(TArgs&&... args)
        {
            return attr("hlines")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hold(TArgs&&... args)
        {
            return attr("hold")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hot(TArgs&&... args)
        {
            return attr("hot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hsv(TArgs&&... args)
        {
            return attr("hsv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object imread(TArgs&&... args)
        {
            return attr("imread")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object imsave(TArgs&&... args)
        {
            return attr("imsave")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object imshow(TArgs&&... args)
        {
            return attr("imshow")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object inferno(TArgs&&... args)
        {
            return attr("inferno")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object install_repl_displayhook(TArgs&&... args)
        {
            return attr("install_repl_displayhook")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object interactive(TArgs&&... args)
        {
            return attr("interactive")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ioff(TArgs&&... args)
        {
            return attr("ioff")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ion(TArgs&&... args)
        {
            return attr("ion")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object is_numlike(TArgs&&... args)
        {
            return attr("is_numlike")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ishold(TArgs&&... args)
        {
            return attr("ishold")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object isinteractive(TArgs&&... args)
        {
            return attr("isinteractive")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object jet(TArgs&&... args)
        {
            return attr("jet")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object legend(TArgs&&... args)
        {
            return attr("legend")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object locator_params(TArgs&&... args)
        {
            return attr("locator_params")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object loglog(TArgs&&... args)
        {
            return attr("loglog")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object magma(TArgs&&... args)
        {
            return attr("magma")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object magnitude_spectrum(TArgs&&... args)
        {
            return attr("magnitude_spectrum")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object margins(TArgs&&... args)
        {
            return attr("margins")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object matshow(TArgs&&... args)
        {
            return attr("matshow")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object minorticks_off(TArgs&&... args)
        {
            return attr("minorticks_off")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object minorticks_on(TArgs&&... args)
        {
            return attr("minorticks_on")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object nipy_spectral(TArgs&&... args)
        {
            return attr("nipy_spectral")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object over(TArgs&&... args)
        {
            return attr("over")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pause(TArgs&&... args)
        {
            return attr("pause")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pcolor(TArgs&&... args)
        {
            return attr("pcolor")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pcolormesh(TArgs&&... args)
        {
            return attr("pcolormesh")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object phase_spectrum(TArgs&&... args)
        {
            return attr("phase_spectrum")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pie(TArgs&&... args)
        {
            return attr("pie")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pink(TArgs&&... args)
        {
            return attr("pink")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object plasma(TArgs&&... args)
        {
            return attr("plasma")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object plot(TArgs&&... args)
        {
            return attr("plot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object plot_date(TArgs&&... args)
        {
            return attr("plot_date")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object plotfile(TArgs&&... args)
        {
            return attr("plotfile")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object plotting(TArgs&&... args)
        {
            return attr("plotting")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object polar(TArgs&&... args)
        {
            return attr("polar")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object prism(TArgs&&... args)
        {
            return attr("prism")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object psd(TArgs&&... args)
        {
            return attr("psd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pylab_setup(TArgs&&... args)
        {
            return attr("pylab_setup")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object quiver(TArgs&&... args)
        {
            return attr("quiver")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object quiverkey(TArgs&&... args)
        {
            return attr("quiverkey")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rc(TArgs&&... args)
        {
            return attr("rc")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rc_context(TArgs&&... args)
        {
            return attr("rc_context")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rcdefaults(TArgs&&... args)
        {
            return attr("rcdefaults")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object register_cmap(TArgs&&... args)
        {
            return attr("register_cmap")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rgrids(TArgs&&... args)
        {
            return attr("rgrids")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object savefig(TArgs&&... args)
        {
            return attr("savefig")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sca(TArgs&&... args)
        {
            return attr("sca")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object scatter(TArgs&&... args)
        {
            return attr("scatter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sci(TArgs&&... args)
        {
            return attr("sci")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object semilogx(TArgs&&... args)
        {
            return attr("semilogx")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object semilogy(TArgs&&... args)
        {
            return attr("semilogy")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object set_cmap(TArgs&&... args)
        {
            return attr("set_cmap")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object setp(TArgs&&... args)
        {
            return attr("setp")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object show(TArgs&&... args)
        {
            return attr("show")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object specgram(TArgs&&... args)
        {
            return attr("specgram")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spectral(TArgs&&... args)
        {
            return attr("spectral")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spring(TArgs&&... args)
        {
            return attr("spring")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object spy(TArgs&&... args)
        {
            return attr("spy")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object stackplot(TArgs&&... args)
        {
            return attr("stackplot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object stem(TArgs&&... args)
        {
            return attr("stem")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object step(TArgs&&... args)
        {
            return attr("step")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object streamplot(TArgs&&... args)
        {
            return attr("streamplot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object subplot(TArgs&&... args)
        {
            return attr("subplot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object subplot2grid(TArgs&&... args)
        {
            return attr("subplot2grid")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object subplot_tool(TArgs&&... args)
        {
            return attr("subplot_tool")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object subplots(TArgs&&... args)
        {
            return attr("subplots")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object subplots_adjust(TArgs&&... args)
        {
            return attr("subplots_adjust")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object summer(TArgs&&... args)
        {
            return attr("summer")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object suptitle(TArgs&&... args)
        {
            return attr("suptitle")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object switch_backend(TArgs&&... args)
        {
            return attr("switch_backend")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object table(TArgs&&... args)
        {
            return attr("table")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object text(TArgs&&... args)
        {
            return attr("text")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object thetagrids(TArgs&&... args)
        {
            return attr("thetagrids")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tick_params(TArgs&&... args)
        {
            return attr("tick_params")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ticklabel_format(TArgs&&... args)
        {
            return attr("ticklabel_format")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tight_layout(TArgs&&... args)
        {
            return attr("tight_layout")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object title(TArgs&&... args)
        {
            return attr("title")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tricontour(TArgs&&... args)
        {
            return attr("tricontour")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tricontourf(TArgs&&... args)
        {
            return attr("tricontourf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tripcolor(TArgs&&... args)
        {
            return attr("tripcolor")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object triplot(TArgs&&... args)
        {
            return attr("triplot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object twinx(TArgs&&... args)
        {
            return attr("twinx")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object twiny(TArgs&&... args)
        {
            return attr("twiny")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object uninstall_repl_displayhook(TArgs&&... args)
        {
            return attr("uninstall_repl_displayhook")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object violinplot(TArgs&&... args)
        {
            return attr("violinplot")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object viridis(TArgs&&... args)
        {
            return attr("viridis")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object vlines(TArgs&&... args)
        {
            return attr("vlines")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object waitforbuttonpress(TArgs&&... args)
        {
            return attr("waitforbuttonpress")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object warn_deprecated(TArgs&&... args)
        {
            return attr("warn_deprecated")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object winter(TArgs&&... args)
        {
            return attr("winter")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object xcorr(TArgs&&... args)
        {
            return attr("xcorr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object xkcd(TArgs&&... args)
        {
            return attr("xkcd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object xlabel(TArgs&&... args)
        {
            return attr("xlabel")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object xlim(TArgs&&... args)
        {
            return attr("xlim")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object xscale(TArgs&&... args)
        {
            return attr("xscale")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object xticks(TArgs&&... args)
        {
            return attr("xticks")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ylabel(TArgs&&... args)
        {
            return attr("ylabel")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ylim(TArgs&&... args)
        {
            return attr("ylim")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object yscale(TArgs&&... args)
        {
            return attr("yscale")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object yticks(TArgs&&... args)
        {
            return attr("yticks")(std::forward<TArgs>(args)...);
        }
    };

    pyplot_module import_pyplot()
    {
        return pybind11::module::import("matplotlib.pyplot");
    }
}
}
