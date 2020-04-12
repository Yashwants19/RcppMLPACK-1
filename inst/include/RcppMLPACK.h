#ifndef RcppMLPACK__RcppMLPACK__h
#define RcppMLPACK__RcppMLPACK__h

#if defined(_MSC_VER)
    #ifdef _WIN64
        #define ARMA_64BIT_WORD
        #ifdef ARMA_32BIT_WORD
            #undef ARMA_32BIT_WORD
        #endif
    #else
        #define ARMA_32BIT_WORD
        #ifdef ARMA_64BIT_WORD
            #undef ARMA_64BIT_WORD
        #endif
    #endif
#endif

#define BINDING_TYPE BINDING_TYPE_R

#include <Rcpp.h>
// More recently this changes from ARMA_DEFAULT_OSTREAM to ARMA_COUT_STREAM
// and ARMA_CERR_STREAM
#if !defined(ARMA_COUT_STREAM)
  #define ARMA_COUT_STREAM Rcpp::Rcout
#endif
#if !defined(ARMA_CERR_STREAM)
  #define ARMA_CERR_STREAM Rcpp::Rcerr
#endif
#if !defined(ARMA_RNG_ALT)
  #define ARMA_RNG_ALT         RcppArmadillo/Alt_R_RNG.h
#endif

#include <mlpack/core/data/load.cpp>
#include <mlpack/core/data/load_csv.cpp>
#include <mlpack/core/math/columns_to_blocks.cpp>
#include <mlpack/core/math/lin_alg.cpp>
#include <mlpack/core/math/random.cpp>
#include <mlpack/core/math/random_basis.cpp>
#include <mlpack/core/tree/cosine_tree/cosine_tree.cpp>
#include <mlpack/core/util/cli.cpp>
#include <mlpack/core/util/backtrace.cpp>
#include <mlpack/core/util/log.cpp>
#include <mlpack/core/util/prefixedoutstream.cpp>
#include <mlpack/core/util/program_doc.cpp>
#include <mlpack/core/util/singletons.cpp>
#include <mlpack/core/util/timers.cpp>
#include <mlpack/core/util/version.cpp>
#include <mlpack/methods/lars/lars.cpp>
#include <mlpack/methods/quic_svd/quic_svd.cpp>
#include <mlpack/methods/randomized_svd/randomized_svd.cpp>>
#include <mlpack/methods/block_krylov_svd/randomized_block_krylov_svd.cpp>

#include <mlpack/core.hpp>

#include <boost/src/xml_oarchive.cpp>
#include <boost/src/basic_oarchive.cpp>
#include <boost/src/basic_oserializer.cpp>
#include <boost/src/archive_exception.cpp>
#include <boost/src/extended_type_info_typeid.cpp>
#include <boost/src/xml_archive_exception.cpp>
#include <boost/src/extended_type_info.cpp>
#include <boost/src/basic_text_oprimitive.cpp>
#include <boost/src/basic_serializer_map.cpp>
#include <boost/src/basic_archive.cpp>
#include <boost/src/basic_xml_archive.cpp>
#include <boost/src/utf8_codecvt_facet.cpp>

#undef ARMA_EXTRA_MAT_PROTO
#undef ARMA_EXTRA_MAT_MEAT

// instead of including RcppArmadillo.h -- which re-includes parts
// of Armadillo already brought in by mlpack, we just include pieces
// needed for sugar wrapping etc

#include <RcppArmadilloConfig.h>
#include <RcppArmadilloWrap.h>
#include <RcppArmadilloAs.h>
#include <RcppArmadilloSugar.h>

// prevent inclusion of Rcpp.h and RcppArmadillo.h via the
// autogenerated RcppExports.cpp
#define Rcpp_hpp
#define RcppArmadillo__RcppArmadillo__h
#endif
