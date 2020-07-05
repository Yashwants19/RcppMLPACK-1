/**
 * @file src/cf.cpp
 *
 * This is an autogenerated file containing implementations of C functions to be
 * called by the R cf binding.
 */
#include <rcpp_mlpack.h>
#define BINDING_TYPE BINDING_TYPE_R
#include <mlpack/methods/cf/cf_main.cpp>

// [[Rcpp::export]]
void cf_mlpackMain()
{
  mlpackMain();
}

// Any implementations of methods for dealing with model pointers will be put
// below this comment, if needed.

// Get the pointer to a CFModel parameter.
// [[Rcpp::export]]
SEXP CLI_GetParamCFModelPtr(const std::string& paramName)
{
  return std::move((Rcpp::XPtr<CFModel>) CLI::GetParam<CFModel*>(paramName));
}

// Set the pointer to a CFModel parameter.
// [[Rcpp::export]]
void CLI_SetParamCFModelPtr(const std::string& paramName, SEXP ptr)
{
  CLI::GetParam<CFModel*>(paramName) =  Rcpp::as<Rcpp::XPtr<CFModel>>(ptr);
  CLI::SetPassed(paramName);
}

// Serialize a CFModel pointer.
// [[Rcpp::export]]
Rcpp::RawVector SerializeCFModelPtr(SEXP ptr)
{
  std::ostringstream oss;
  {
    boost::archive::binary_oarchive oa(oss);
    oa << boost::serialization::make_nvp("CFModel",
          *Rcpp::as<Rcpp::XPtr<CFModel>>(ptr));
  }

  Rcpp::RawVector raw_vec(oss.str().size());

  // Copy the string buffer so we can return one that won't get deallocated when
  // we exit this function.
  memcpy(&raw_vec[0], oss.str().c_str(), oss.str().size());
  raw_vec.attr("type") = "CFModel";
  return raw_vec;
}

// Deserialize a CFModel pointer.
// [[Rcpp::export]]
SEXP DeserializeCFModelPtr(Rcpp::RawVector str)
{
  CFModel* ptr = new CFModel();

  std::istringstream iss(std::string((char *) &str[0], str.size()));
  {
    boost::archive::binary_iarchive ia(iss);
    ia >> boost::serialization::make_nvp("CFModel", *ptr);
  }

  // R will be responsible for freeing this.
  return std::move((Rcpp::XPtr<CFModel>)ptr);
}

