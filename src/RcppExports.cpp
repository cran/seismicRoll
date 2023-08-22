// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// roll_mean_numeric_vector
NumericVector roll_mean_numeric_vector(NumericVector x, int n, int increment, int alignCode);
RcppExport SEXP _seismicRoll_roll_mean_numeric_vector(SEXP xSEXP, SEXP nSEXP, SEXP incrementSEXP, SEXP alignCodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type increment(incrementSEXP);
    Rcpp::traits::input_parameter< int >::type alignCode(alignCodeSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_mean_numeric_vector(x, n, increment, alignCode));
    return rcpp_result_gen;
END_RCPP
}
// roll_median_numeric_vector
NumericVector roll_median_numeric_vector(NumericVector x, int n, int increment);
RcppExport SEXP _seismicRoll_roll_median_numeric_vector(SEXP xSEXP, SEXP nSEXP, SEXP incrementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type increment(incrementSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_median_numeric_vector(x, n, increment));
    return rcpp_result_gen;
END_RCPP
}
// roll_hampel_numeric_vector
NumericVector roll_hampel_numeric_vector(NumericVector x, int n, int increment);
RcppExport SEXP _seismicRoll_roll_hampel_numeric_vector(SEXP xSEXP, SEXP nSEXP, SEXP incrementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type increment(incrementSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_hampel_numeric_vector(x, n, increment));
    return rcpp_result_gen;
END_RCPP
}
// roll_sd_numeric_vector
NumericVector roll_sd_numeric_vector(NumericVector x, int n, int increment, int alignCode);
RcppExport SEXP _seismicRoll_roll_sd_numeric_vector(SEXP xSEXP, SEXP nSEXP, SEXP incrementSEXP, SEXP alignCodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type increment(incrementSEXP);
    Rcpp::traits::input_parameter< int >::type alignCode(alignCodeSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_sd_numeric_vector(x, n, increment, alignCode));
    return rcpp_result_gen;
END_RCPP
}
// roll_stalta_numeric_vector
NumericVector roll_stalta_numeric_vector(NumericVector x, int n_sta, int n_lta, int increment);
RcppExport SEXP _seismicRoll_roll_stalta_numeric_vector(SEXP xSEXP, SEXP n_staSEXP, SEXP n_ltaSEXP, SEXP incrementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n_sta(n_staSEXP);
    Rcpp::traits::input_parameter< int >::type n_lta(n_ltaSEXP);
    Rcpp::traits::input_parameter< int >::type increment(incrementSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_stalta_numeric_vector(x, n_sta, n_lta, increment));
    return rcpp_result_gen;
END_RCPP
}
// roll_range_numeric_vector
NumericVector roll_range_numeric_vector(NumericVector x, int n, int increment, int alignCode);
RcppExport SEXP _seismicRoll_roll_range_numeric_vector(SEXP xSEXP, SEXP nSEXP, SEXP incrementSEXP, SEXP alignCodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type increment(incrementSEXP);
    Rcpp::traits::input_parameter< int >::type alignCode(alignCodeSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_range_numeric_vector(x, n, increment, alignCode));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_seismicRoll_roll_mean_numeric_vector", (DL_FUNC) &_seismicRoll_roll_mean_numeric_vector, 4},
    {"_seismicRoll_roll_median_numeric_vector", (DL_FUNC) &_seismicRoll_roll_median_numeric_vector, 3},
    {"_seismicRoll_roll_hampel_numeric_vector", (DL_FUNC) &_seismicRoll_roll_hampel_numeric_vector, 3},
    {"_seismicRoll_roll_sd_numeric_vector", (DL_FUNC) &_seismicRoll_roll_sd_numeric_vector, 4},
    {"_seismicRoll_roll_stalta_numeric_vector", (DL_FUNC) &_seismicRoll_roll_stalta_numeric_vector, 4},
    {"_seismicRoll_roll_range_numeric_vector", (DL_FUNC) &_seismicRoll_roll_range_numeric_vector, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_seismicRoll(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
