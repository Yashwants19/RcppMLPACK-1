/**
 * @file arma_config.hpp
 *
 * This is an autogenerated file which contains the configuration of Armadillo
 * at the time mlpack was built.  If you modify anything in here by hand, your
 * warranty is void, your house may catch fire, and we're not going to call the
 * police when your program segfaults so hard that robbers come to your house
 * and take everything you own.  If you do decide, against better judgment, to
 * modify anything at all in this file, and you are reporting a bug, be
 * absolutely certain to mention that you've done something stupid in this file
 * first.
 *
 * In short: don't touch this file.
 */
#ifndef MLPACK_CORE_UTIL_ARMA_CONFIG_HPP
#define MLPACK_CORE_UTIL_ARMA_CONFIG_HPP

#ifdef ARMA_64BIT_WORD
  #define MLPACK_ARMA_64BIT_WORD
#else
  #define MLPACK_ARMA_NO_64BIT_WORD
#endif

#ifdef ARMA_USE_OPENMP
  #define MLPACK_ARMA_USE_OPENMP
  #define ENS_USE_OPENMP 1
#else
  #define MLPACK_ARMA_DONT_USE_OPENMP
  #define ENS_DONT_USE_OPENMP 1
#endif

#endif
