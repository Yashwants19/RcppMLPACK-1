/**
 * @file src/kmeans.cpp
 *
 * This is an autogenerated file containing implementations of C functions to be
 * called by the R kmeans binding.
 */
#include <rcpp_mlpack.h>
#define BINDING_TYPE BINDING_TYPE_R
#include <mlpack/methods/kmeans/kmeans_main.cpp>

// [[Rcpp::export]]
void kmeans_mlpackMain()
{
  mlpackMain();
}

// Any implementations of methods for dealing with model pointers will be put
// below this comment, if needed.


