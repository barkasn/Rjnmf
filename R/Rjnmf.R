#' @useDynLib Rjnmf
#' @importFrom Rcpp sourceCpp
NULL

## NULL

#' Performd Joint NMF for two matrices
#' @export Rjnmf
Rjnmf <- function(Xs, Xu, k, alpha, lambda, epsilon, maxiter, verbose, seed =  4123) {
    set.seed(seed);

   ret <- RjnmfC(Xs, Xu, k, alpha, lambda, epsilon, maxiter, verbose);
   names(ret) <- c('Hs','Hu','W');
   ret;
}

#' Perform Joint NMF with graph regularisation
#' @export RjnmfGR
RjnmfGR <- function(Xs, Xu, A, k, alpha, beta, lambda, epsilon, maxiter, verbose, seed= 4123) {
    set.seed(seed);

    ret <- RjnmfGRC(Xs, Xu, A, k, alpha, beta, lambda, epsilon, maxiter, verbose);
    names(ret) <- c('Hs','Hu','W');
    ret;

}
