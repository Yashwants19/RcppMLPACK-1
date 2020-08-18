/**
 * @file src/logistic_regression.cpp
 *
 * This is an autogenerated file containing implementations of C++ functions to
 * be called by the R logistic_regression binding.
 */
#include <rcpp_mlpack.h>
#define BINDING_TYPE BINDING_TYPE_R
#include <mlpack/methods/logistic_regression/logistic_regression_main.cpp>

// [[Rcpp::export]]
void logistic_regression_mlpackMain()
{
  mlpackMain();
}

// Any implementations of methods for dealing with model pointers will be put
// below this comment, if needed.

// Get the pointer to a LogisticRegression<> parameter.
// [[Rcpp::export]]
SEXP IO_GetParamLogisticRegressionPtr(const std::string& paramName)
{
  return std::move((Rcpp::XPtr<LogisticRegression<>>) IO::GetParam<LogisticRegression<>*>(paramName));
}

// Set the pointer to a LogisticRegression<> parameter.
// [[Rcpp::export]]
void IO_SetParamLogisticRegressionPtr(const std::string& paramName, SEXP ptr)
{
  IO::GetParam<LogisticRegression<>*>(paramName) =  Rcpp::as<Rcpp::XPtr<LogisticRegression<>>>(ptr);
  IO::SetPassed(paramName);
}

// Serialize a LogisticRegression<> pointer.
// [[Rcpp::export]]
Rcpp::RawVector SerializeLogisticRegressionPtr(SEXP ptr)
{
  std::ostringstream oss;
  {
    cereal::BinaryOutputArchive oa(oss);
    oa << cereal::make_nvp("LogisticRegression",
          *Rcpp::as<Rcpp::XPtr<LogisticRegression<>>>(ptr));
  }

  Rcpp::RawVector raw_vec(oss.str().size());

  // Copy the string buffer so we can return one that won't get deallocated when
  // we exit this function.
  memcpy(&raw_vec[0], oss.str().c_str(), oss.str().size());
  raw_vec.attr("type") = "LogisticRegression";
  return raw_vec;
}

// Deserialize a LogisticRegression<> pointer.
// [[Rcpp::export]]
SEXP DeserializeLogisticRegressionPtr(Rcpp::RawVector str)
{
  LogisticRegression<>* ptr = new LogisticRegression<>();

  std::istringstream iss(std::string((char *) &str[0], str.size()));
  {
    cereal::BinaryInputArchive ia(iss);
    ia >> cereal::make_nvp("LogisticRegression", *ptr);
  }

  // R will be responsible for freeing this.
  return std::move((Rcpp::XPtr<LogisticRegression<>>)ptr);
}


