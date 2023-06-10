#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double add_cpp2(double x, double y) {
  double value = x + y;
  return value;
}