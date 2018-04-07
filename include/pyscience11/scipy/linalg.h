//
//  linalg.h
//  pyscience11
//
//  Copyright (C) 2018 Rue Yokaze
//  Distributed under the MIT License.
//
#pragma once
#include <pybind11/pybind11.h>

namespace scipy11 {
namespace scipy {

    class linalg_module : public pybind11::module {
    public:
        using pybind11::module::module;

        template <class... TArgs>
        pybind11::object block_diag(TArgs&&... args)
        {
            return attr("block_diag")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cho_factor(TArgs&&... args)
        {
            return attr("cho_factor")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cho_solve(TArgs&&... args)
        {
            return attr("cho_solve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cho_solve_banded(TArgs&&... args)
        {
            return attr("cho_solve_banded")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cholesky(TArgs&&... args)
        {
            return attr("cholesky")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cholesky_banded(TArgs&&... args)
        {
            return attr("cholesky_banded")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object circulant(TArgs&&... args)
        {
            return attr("circulant")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object clarkson_woodruff_transform(TArgs&&... args)
        {
            return attr("clarkson_woodruff_transform")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object companion(TArgs&&... args)
        {
            return attr("companion")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object coshm(TArgs&&... args)
        {
            return attr("coshm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object cosm(TArgs&&... args)
        {
            return attr("cosm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object det(TArgs&&... args)
        {
            return attr("det")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object dft(TArgs&&... args)
        {
            return attr("dft")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object diagsvd(TArgs&&... args)
        {
            return attr("diagsvd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eig(TArgs&&... args)
        {
            return attr("eig")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eig_banded(TArgs&&... args)
        {
            return attr("eig_banded")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eigh(TArgs&&... args)
        {
            return attr("eigh")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eigh_tridiagonal(TArgs&&... args)
        {
            return attr("eigh_tridiagonal")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eigvals(TArgs&&... args)
        {
            return attr("eigvals")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eigvals_banded(TArgs&&... args)
        {
            return attr("eigvals_banded")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eigvalsh(TArgs&&... args)
        {
            return attr("eigvalsh")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object eigvalsh_tridiagonal(TArgs&&... args)
        {
            return attr("eigvalsh_tridiagonal")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object expm(TArgs&&... args)
        {
            return attr("expm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object expm_cond(TArgs&&... args)
        {
            return attr("expm_cond")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object expm_frechet(TArgs&&... args)
        {
            return attr("expm_frechet")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object find_best_blas_type(TArgs&&... args)
        {
            return attr("find_best_blas_type")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object fractional_matrix_power(TArgs&&... args)
        {
            return attr("fractional_matrix_power")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object funm(TArgs&&... args)
        {
            return attr("funm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_blas_funcs(TArgs&&... args)
        {
            return attr("get_blas_funcs")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object get_lapack_funcs(TArgs&&... args)
        {
            return attr("get_lapack_funcs")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hadamard(TArgs&&... args)
        {
            return attr("hadamard")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hankel(TArgs&&... args)
        {
            return attr("hankel")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object helmert(TArgs&&... args)
        {
            return attr("helmert")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hessenberg(TArgs&&... args)
        {
            return attr("hessenberg")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object hilbert(TArgs&&... args)
        {
            return attr("hilbert")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object inv(TArgs&&... args)
        {
            return attr("inv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object invhilbert(TArgs&&... args)
        {
            return attr("invhilbert")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object invpascal(TArgs&&... args)
        {
            return attr("invpascal")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object kron(TArgs&&... args)
        {
            return attr("kron")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object leslie(TArgs&&... args)
        {
            return attr("leslie")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object logm(TArgs&&... args)
        {
            return attr("logm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lstsq(TArgs&&... args)
        {
            return attr("lstsq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lu(TArgs&&... args)
        {
            return attr("lu")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lu_factor(TArgs&&... args)
        {
            return attr("lu_factor")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object lu_solve(TArgs&&... args)
        {
            return attr("lu_solve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object matrix_balance(TArgs&&... args)
        {
            return attr("matrix_balance")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object norm(TArgs&&... args)
        {
            return attr("norm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object ordqz(TArgs&&... args)
        {
            return attr("ordqz")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object orth(TArgs&&... args)
        {
            return attr("orth")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object orthogonal_procrustes(TArgs&&... args)
        {
            return attr("orthogonal_procrustes")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pascal(TArgs&&... args)
        {
            return attr("pascal")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pinv(TArgs&&... args)
        {
            return attr("pinv")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pinv2(TArgs&&... args)
        {
            return attr("pinv2")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object pinvh(TArgs&&... args)
        {
            return attr("pinvh")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object polar(TArgs&&... args)
        {
            return attr("polar")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object qr(TArgs&&... args)
        {
            return attr("qr")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object qr_delete(TArgs&&... args)
        {
            return attr("qr_delete")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object qr_insert(TArgs&&... args)
        {
            return attr("qr_insert")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object qr_multiply(TArgs&&... args)
        {
            return attr("qr_multiply")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object qr_update(TArgs&&... args)
        {
            return attr("qr_update")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object qz(TArgs&&... args)
        {
            return attr("qz")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rq(TArgs&&... args)
        {
            return attr("rq")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object rsf2csf(TArgs&&... args)
        {
            return attr("rsf2csf")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object schur(TArgs&&... args)
        {
            return attr("schur")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object signm(TArgs&&... args)
        {
            return attr("signm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sinhm(TArgs&&... args)
        {
            return attr("sinhm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sinm(TArgs&&... args)
        {
            return attr("sinm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve(TArgs&&... args)
        {
            return attr("solve")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve_banded(TArgs&&... args)
        {
            return attr("solve_banded")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve_circulant(TArgs&&... args)
        {
            return attr("solve_circulant")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve_continuous_are(TArgs&&... args)
        {
            return attr("solve_continuous_are")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve_continuous_lyapunov(TArgs&&... args)
        {
            return attr("solve_continuous_lyapunov")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve_discrete_are(TArgs&&... args)
        {
            return attr("solve_discrete_are")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve_discrete_lyapunov(TArgs&&... args)
        {
            return attr("solve_discrete_lyapunov")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve_sylvester(TArgs&&... args)
        {
            return attr("solve_sylvester")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve_toeplitz(TArgs&&... args)
        {
            return attr("solve_toeplitz")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solve_triangular(TArgs&&... args)
        {
            return attr("solve_triangular")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object solveh_banded(TArgs&&... args)
        {
            return attr("solveh_banded")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object sqrtm(TArgs&&... args)
        {
            return attr("sqrtm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object subspace_angles(TArgs&&... args)
        {
            return attr("subspace_angles")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object svd(TArgs&&... args)
        {
            return attr("svd")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object svdvals(TArgs&&... args)
        {
            return attr("svdvals")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tanhm(TArgs&&... args)
        {
            return attr("tanhm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tanm(TArgs&&... args)
        {
            return attr("tanm")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object toeplitz(TArgs&&... args)
        {
            return attr("toeplitz")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tri(TArgs&&... args)
        {
            return attr("tri")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object tril(TArgs&&... args)
        {
            return attr("tril")(std::forward<TArgs>(args)...);
        }

        template <class... TArgs>
        pybind11::object triu(TArgs&&... args)
        {
            return attr("triu")(std::forward<TArgs>(args)...);
        }
    };

    linalg_module import_linalg()
    {
        return pybind11::module::import("scipy.linalg");
    }
}
}
