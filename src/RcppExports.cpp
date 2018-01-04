// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppAlgos.h"
#include <Rcpp.h>

using namespace Rcpp;

// CombinatoricsRcpp
SEXP CombinatoricsRcpp(SEXP Rv, SEXP Rm, SEXP Rrepetition, SEXP f1, SEXP f2, SEXP lim, SEXP numRow, SEXP RIsComb, SEXP RIsFactor, SEXP RKeepRes, SEXP RFreqs);
RcppExport SEXP _RcppAlgos_CombinatoricsRcpp(SEXP RvSEXP, SEXP RmSEXP, SEXP RrepetitionSEXP, SEXP f1SEXP, SEXP f2SEXP, SEXP limSEXP, SEXP numRowSEXP, SEXP RIsCombSEXP, SEXP RIsFactorSEXP, SEXP RKeepResSEXP, SEXP RFreqsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rv(RvSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Rm(RmSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Rrepetition(RrepetitionSEXP);
    Rcpp::traits::input_parameter< SEXP >::type f1(f1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type f2(f2SEXP);
    Rcpp::traits::input_parameter< SEXP >::type lim(limSEXP);
    Rcpp::traits::input_parameter< SEXP >::type numRow(numRowSEXP);
    Rcpp::traits::input_parameter< SEXP >::type RIsComb(RIsCombSEXP);
    Rcpp::traits::input_parameter< SEXP >::type RIsFactor(RIsFactorSEXP);
    Rcpp::traits::input_parameter< SEXP >::type RKeepRes(RKeepResSEXP);
    Rcpp::traits::input_parameter< SEXP >::type RFreqs(RFreqsSEXP);
    rcpp_result_gen = Rcpp::wrap(CombinatoricsRcpp(Rv, Rm, Rrepetition, f1, f2, lim, numRow, RIsComb, RIsFactor, RKeepRes, RFreqs));
    return rcpp_result_gen;
END_RCPP
}
// NumDivisorsSieve
IntegerVector NumDivisorsSieve(SEXP n);
RcppExport SEXP _RcppAlgos_NumDivisorsSieve(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(NumDivisorsSieve(n));
    return rcpp_result_gen;
END_RCPP
}
// DivisorListRcpp
List DivisorListRcpp(SEXP n);
RcppExport SEXP _RcppAlgos_DivisorListRcpp(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(DivisorListRcpp(n));
    return rcpp_result_gen;
END_RCPP
}
// PrimeFactorizationListRcpp
List PrimeFactorizationListRcpp(SEXP n);
RcppExport SEXP _RcppAlgos_PrimeFactorizationListRcpp(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(PrimeFactorizationListRcpp(n));
    return rcpp_result_gen;
END_RCPP
}
// EulerPhiSieveRcpp
IntegerVector EulerPhiSieveRcpp(SEXP n);
RcppExport SEXP _RcppAlgos_EulerPhiSieveRcpp(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(EulerPhiSieveRcpp(n));
    return rcpp_result_gen;
END_RCPP
}
// EratosthenesRcpp
SEXP EratosthenesRcpp(SEXP Rb1, SEXP Rb2);
RcppExport SEXP _RcppAlgos_EratosthenesRcpp(SEXP Rb1SEXP, SEXP Rb2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rb1(Rb1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type Rb2(Rb2SEXP);
    rcpp_result_gen = Rcpp::wrap(EratosthenesRcpp(Rb1, Rb2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppAlgos_CombinatoricsRcpp", (DL_FUNC) &_RcppAlgos_CombinatoricsRcpp, 11},
    {"_RcppAlgos_NumDivisorsSieve", (DL_FUNC) &_RcppAlgos_NumDivisorsSieve, 1},
    {"_RcppAlgos_DivisorListRcpp", (DL_FUNC) &_RcppAlgos_DivisorListRcpp, 1},
    {"_RcppAlgos_PrimeFactorizationListRcpp", (DL_FUNC) &_RcppAlgos_PrimeFactorizationListRcpp, 1},
    {"_RcppAlgos_EulerPhiSieveRcpp", (DL_FUNC) &_RcppAlgos_EulerPhiSieveRcpp, 1},
    {"_RcppAlgos_EratosthenesRcpp", (DL_FUNC) &_RcppAlgos_EratosthenesRcpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppAlgos(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
