// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;


RcppExport SEXP _rcpp_module_boot_stan_fit4fit_model_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4fit_model_gomp_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4fit_model_log_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4simulate_data_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4simulate_data_gomp_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4simulate_data_log_mod();

static const R_CallMethodDef CallEntries[] = {
    {"_rcpp_module_boot_stan_fit4fit_model_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4fit_model_mod, 0},
    {"_rcpp_module_boot_stan_fit4fit_model_gomp_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4fit_model_gomp_mod, 0},
    {"_rcpp_module_boot_stan_fit4fit_model_log_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4fit_model_log_mod, 0},
    {"_rcpp_module_boot_stan_fit4simulate_data_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4simulate_data_mod, 0},
    {"_rcpp_module_boot_stan_fit4simulate_data_gomp_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4simulate_data_gomp_mod, 0},
    {"_rcpp_module_boot_stan_fit4simulate_data_log_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4simulate_data_log_mod, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_ssMousetrack(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}