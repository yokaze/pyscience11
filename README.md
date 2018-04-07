# Overview
pyscience11 is a C++11 wrapper for NumPy, SciPy and Matplotlib, that provides lightspeed access to their functionality.

```cpp
#include <pybind11/embed.h>
#include <pybind11/pybind11.h>
#include <pyscience11/matplotlib.h>
#include <pyscience11/matplotlib/pyplot.h>
#include <pyscience11/numpy.h>
#include <pyscience11/scipy/special.h>

namespace py = pybind11;
namespace m11 = matplotlib11;
namespace n11 = numpy11;
namespace s11 = scipy11;

int main(void)
{
    py::scoped_interpreter interpreter;

    auto numpy = n11::import_numpy();
    auto scipy_special = s11::scipy::import_special();
    auto x = numpy.linspace(-2, 2, 1001, py::arg("dtype") = numpy.attr("float32"));
    auto y = scipy_special.erf(x);

    auto matplotlib = m11::import_matplotlib();
    matplotlib.use("TkAgg");

    auto pl = m11::matplotlib::import_pyplot();
    pl.plot(x, y);
    pl.show();

    return 0;
}
```

# Install
This library is header-only, therefore nothing needs to be installed.

Following command could be helpful to place headers to some official location.
```shell
pip install pyscience11
```

# Requirements
- [pybind11](https://github.com/pybind/pybind11)

# Contact
If you have any question about the library, feel free to contact me: https://github.com/yokaze
