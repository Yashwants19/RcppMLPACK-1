/**
 * @file src/kde.cpp
 *
 * This is an autogenerated file containing implementations of C functions to be
 * called by the R kde binding.
 */
#include <rcpp_mlpack.h>
#define BINDING_TYPE BINDING_TYPE_R
#include <mlpack/methods/kde/kde_main.cpp>

// [[Rcpp::export]]
void kde_mlpackMain()
{
  mlpackMain();
}

// Any implementations of methods for dealing with model pointers will be put
// below this comment, if needed.

// Get the pointer to a KDEModel parameter.
// [[Rcpp::export]]
SEXP IO_GetParamKDEModelPtr(const std::string& paramName)
{
  return std::move((Rcpp::XPtr<KDEModel>) IO::GetParam<KDEModel*>(paramName));
}

// Set the pointer to a KDEModel parameter.
// [[Rcpp::export]]
void IO_SetParamKDEModelPtr(const std::string& paramName, SEXP ptr)
{
  IO::GetParam<KDEModel*>(paramName) =  Rcpp::as<Rcpp::XPtr<KDEModel>>(ptr);
  IO::SetPassed(paramName);
}

// Serialize a KDEModel pointer.
// [[Rcpp::export]]
Rcpp::RawVector SerializeKDEModelPtr(SEXP ptr)
{
  std::ostringstream oss;
  {
    boost::archive::binary_oarchive oa(oss);
    oa << boost::serialization::make_nvp("KDEModel",
          *Rcpp::as<Rcpp::XPtr<KDEModel>>(ptr));
  }

  Rcpp::RawVector raw_vec(oss.str().size());

  // Copy the string buffer so we can return one that won't get deallocated when
  // we exit this function.
  memcpy(&raw_vec[0], oss.str().c_str(), oss.str().size());
  raw_vec.attr("type") = "KDEModel";
  return raw_vec;
}

// Deserialize a KDEModel pointer.
// [[Rcpp::export]]
SEXP DeserializeKDEModelPtr(Rcpp::RawVector str)
{
  KDEModel* ptr = new KDEModel();

  std::istringstream iss(std::string((char *) &str[0], str.size()));
  {
    boost::archive::binary_iarchive ia(iss);
    ia >> boost::serialization::make_nvp("KDEModel", *ptr);
  }

  // R will be responsible for freeing this.
  return std::move((Rcpp::XPtr<KDEModel>)ptr);
}


