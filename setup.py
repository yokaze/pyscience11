from distutils.command.install_headers import install_headers
from pathlib import Path
from setuptools import setup


class pyscience11_install_headers(install_headers):
    def run(self):
        headers = self.distribution.headers
        if not headers:
            return

        for header in headers:
            source_header_path = Path(header).relative_to('include/pyscience11')
            install_path = Path(self.install_dir)/source_header_path
            install_dir = str(install_path.parent)
            self.mkpath(install_dir)

            (out, _) = self.copy_file(header, install_dir)
            self.outfiles.append(out)

headers = [
    'include/pyscience11/matplotlib/pyplot.h',
    'include/pyscience11/numpy/dual.h',
    'include/pyscience11/numpy/fft.h',
    'include/pyscience11/numpy/linalg.h',
    'include/pyscience11/numpy/random.h',
    'include/pyscience11/scipy/io/wavfile.h',
    'include/pyscience11/scipy/fftpack.h',
    'include/pyscience11/scipy/integrate.h',
    'include/pyscience11/scipy/interpolate.h',
    'include/pyscience11/scipy/io.h',
    'include/pyscience11/scipy/linalg.h',
    'include/pyscience11/scipy/ndimage.h',
    'include/pyscience11/scipy/optimize.h',
    'include/pyscience11/scipy/signal.h',
    'include/pyscience11/scipy/spatial.h',
    'include/pyscience11/scipy/special.h',
    'include/pyscience11/scipy/stats.h',
    'include/pyscience11/matplotlib.h',
    'include/pyscience11/numpy.h',
    'include/pyscience11/scipy.h',
]

# Fields are ordered: https://setuptools.readthedocs.io/en/latest/setuptools.html#metadata
# Classifiers: https://pypi.org/pypi?%3Aaction=list_classifiers
setup(
    name='pyscience11',
    version='0.5',
    url='https://github.com/yokaze/pyscience11',
    author='Rue Yokaze',
    author_email='yokaze.rue@gmail.com',
    classifiers=[
        'Development Status :: 3 - Alpha',
        'Intended Audience :: Science/Research',
        'License :: OSI Approved :: MIT License',
        'Programming Language :: C++',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.6',
    ],
    license='MIT',
    description='C++11 wrapper for NumPy, SciPy and Matplotlib',
    long_description='C++11 wrapper for NumPy, SciPy and Matplotlib',
    keywords=['C++', 'pybind11', 'numpy', 'scipy', 'matplotlib'],
    packages=['pyscience11'],
    package_data={
        '': [
            'LICENSE',
            'original_license/MATPLOTLIB_LICENSE',
            'original_license/NUMPY_LICENSE',
            'original_license/SCIPY_LICENSE'
        ],
    },
    headers=headers,
    cmdclass={'install_headers': pyscience11_install_headers},
)
