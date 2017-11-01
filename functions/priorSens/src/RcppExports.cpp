// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// coord_correc_func_cpp
NumericVector coord_correc_func_cpp(double theta, List coordinate_correction);
RcppExport SEXP _priorSens_coord_correc_func_cpp(SEXP thetaSEXP, SEXP coordinate_correctionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< List >::type coordinate_correction(coordinate_correctionSEXP);
    rcpp_result_gen = Rcpp::wrap(coord_correc_func_cpp(theta, coordinate_correction));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_priorSens_coord_correc_func_cpp", (DL_FUNC) &_priorSens_coord_correc_func_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_priorSens(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
