// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// newcore
List newcore(String inifile);
RcppExport SEXP _hector_newcore(SEXP inifileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type inifile(inifileSEXP);
    rcpp_result_gen = Rcpp::wrap(newcore(inifile));
    return rcpp_result_gen;
END_RCPP
}
// shutdown
List shutdown(List core);
RcppExport SEXP _hector_shutdown(SEXP coreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type core(coreSEXP);
    rcpp_result_gen = Rcpp::wrap(shutdown(core));
    return rcpp_result_gen;
END_RCPP
}
// run
void run(List core, double runtodate);
RcppExport SEXP _hector_run(SEXP coreSEXP, SEXP runtodateSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type core(coreSEXP);
    Rcpp::traits::input_parameter< double >::type runtodate(runtodateSEXP);
    run(core, runtodate);
    return R_NilValue;
END_RCPP
}
// getdate
double getdate(List core);
RcppExport SEXP _hector_getdate(SEXP coreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type core(coreSEXP);
    rcpp_result_gen = Rcpp::wrap(getdate(core));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_hector_newcore", (DL_FUNC) &_hector_newcore, 1},
    {"_hector_shutdown", (DL_FUNC) &_hector_shutdown, 1},
    {"_hector_run", (DL_FUNC) &_hector_run, 2},
    {"_hector_getdate", (DL_FUNC) &_hector_getdate, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_hector(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
