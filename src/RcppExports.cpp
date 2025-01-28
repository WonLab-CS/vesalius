// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// pearson_fast
Eigen::MatrixXd pearson_fast(const Eigen::MatrixXd& seed, const Eigen::MatrixXd& query);
RcppExport SEXP _vesalius_pearson_fast(SEXP seedSEXP, SEXP querySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type query(querySEXP);
    rcpp_result_gen = Rcpp::wrap(pearson_fast(seed, query));
    return rcpp_result_gen;
END_RCPP
}
// pearson_exact
Rcpp::NumericMatrix pearson_exact(const Eigen::Map<Eigen::MatrixXd>& seed, const Eigen::Map<Eigen::MatrixXd>& query);
RcppExport SEXP _vesalius_pearson_exact(SEXP seedSEXP, SEXP querySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type query(querySEXP);
    rcpp_result_gen = Rcpp::wrap(pearson_exact(seed, query));
    return rcpp_result_gen;
END_RCPP
}
// jaccard_cost
Eigen::MatrixXd jaccard_cost(const Rcpp::CharacterMatrix& seed, const Rcpp::CharacterMatrix& query);
RcppExport SEXP _vesalius_jaccard_cost(SEXP seedSEXP, SEXP querySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterMatrix& >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterMatrix& >::type query(querySEXP);
    rcpp_result_gen = Rcpp::wrap(jaccard_cost(seed, query));
    return rcpp_result_gen;
END_RCPP
}
// bubble_stack_optimized
IntegerVector bubble_stack_optimized(const Eigen::MatrixXd& coordinates, int n_centers, int max_iter);
RcppExport SEXP _vesalius_bubble_stack_optimized(SEXP coordinatesSEXP, SEXP n_centersSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type coordinates(coordinatesSEXP);
    Rcpp::traits::input_parameter< int >::type n_centers(n_centersSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(bubble_stack_optimized(coordinates, n_centers, max_iter));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_vesalius_pearson_fast", (DL_FUNC) &_vesalius_pearson_fast, 2},
    {"_vesalius_pearson_exact", (DL_FUNC) &_vesalius_pearson_exact, 2},
    {"_vesalius_jaccard_cost", (DL_FUNC) &_vesalius_jaccard_cost, 2},
    {"_vesalius_bubble_stack_optimized", (DL_FUNC) &_vesalius_bubble_stack_optimized, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_vesalius(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
