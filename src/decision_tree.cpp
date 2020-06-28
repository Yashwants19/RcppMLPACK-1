/**
 * @file src/decision_tree.cpp
 *
 * This is an autogenerated file containing implementations of C functions to be
 * called by the R decision_tree binding.
 */
#include <rcpp_mlpack.h>
#define BINDING_TYPE BINDING_TYPE_R
#include <mlpack/methods/decision_tree/decision_tree_main.cpp>

// [[Rcpp::export]]
void decision_tree_mlpackMain()
{
  mlpackMain();
}

// Any implementations of methods for dealing with model pointers will be put
// below this comment, if needed.

// Get the pointer to a DecisionTreeModel parameter.
// [[Rcpp::export]]
SEXP CLI_GetParamDecisionTreeModelPtr(const std::string& paramName)
{
  return std::move((Rcpp::XPtr<DecisionTreeModel>) CLI::GetParam<DecisionTreeModel*>(paramName));
}

// Set the pointer to a DecisionTreeModel parameter.
// [[Rcpp::export]]
void CLI_SetParamDecisionTreeModelPtr(const std::string& paramName, SEXP ptr)
{
  CLI::GetParam<DecisionTreeModel*>(paramName) =  Rcpp::as<Rcpp::XPtr<DecisionTreeModel>>(ptr);
  CLI::SetPassed(paramName);
}

// Serialize a DecisionTreeModel pointer.
// [[Rcpp::export]]
Rcpp::RawVector SerializeDecisionTreeModelPtr(SEXP ptr)
{
  std::ostringstream oss;
  {
    boost::archive::binary_oarchive oa(oss);
    oa << boost::serialization::make_nvp("DecisionTreeModel",
          *Rcpp::as<Rcpp::XPtr<DecisionTreeModel>>(ptr));
  }

  Rcpp::RawVector raw_vec(oss.str().size());

  // Copy the string buffer so we can return one that won't get deallocated when
  // we exit this function.
  memcpy(&raw_vec[0], oss.str().c_str(), oss.str().size());
  raw_vec.attr("type") = "DecisionTreeModel";
  return raw_vec;
}

// Deserialize a DecisionTreeModel pointer.
// [[Rcpp::export]]
SEXP DeserializeDecisionTreeModelPtr(Rcpp::RawVector str)
{
  DecisionTreeModel* ptr = new DecisionTreeModel();

  std::istringstream iss(std::string((char *) &str[0], str.size()));
  {
    boost::archive::binary_iarchive ia(iss);
    ia >> boost::serialization::make_nvp("DecisionTreeModel", *ptr);
  }

  // R will be responsible for freeing this.
  return std::move((Rcpp::XPtr<DecisionTreeModel>)ptr);
}


