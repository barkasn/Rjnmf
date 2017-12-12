// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// RjnmfC
arma::field<arma::mat> RjnmfC(arma::mat Xs, arma::mat Xu, int k, double alpha, double lambda, double epsilon, int maxiter, bool verbose);
RcppExport SEXP _Rjnmf_RjnmfC(SEXP XsSEXP, SEXP XuSEXP, SEXP kSEXP, SEXP alphaSEXP, SEXP lambdaSEXP, SEXP epsilonSEXP, SEXP maxiterSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Xs(XsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xu(XuSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(RjnmfC(Xs, Xu, k, alpha, lambda, epsilon, maxiter, verbose));
    return rcpp_result_gen;
END_RCPP
}
// RjnmfGRC
arma::field<arma::mat> RjnmfGRC(arma::mat Xs, arma::mat Xu, arma::mat A, int k, double alpha, double beta, double lambda, double epsilon, int maxiter, bool verbose);
RcppExport SEXP _Rjnmf_RjnmfGRC(SEXP XsSEXP, SEXP XuSEXP, SEXP ASEXP, SEXP kSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP lambdaSEXP, SEXP epsilonSEXP, SEXP maxiterSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Xs(XsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xu(XuSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(RjnmfGRC(Xs, Xu, A, k, alpha, beta, lambda, epsilon, maxiter, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rjnmf_RjnmfC", (DL_FUNC) &_Rjnmf_RjnmfC, 8},
    {"_Rjnmf_RjnmfGRC", (DL_FUNC) &_Rjnmf_RjnmfGRC, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rjnmf(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
