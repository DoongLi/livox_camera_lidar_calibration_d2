#ifndef TYPE_H
#define TYPE_H

#include <ceres/ceres.h>

// `LocalParameterization` was deprecated in v2.1 and removed in v2.2
// `Manifold` is the new `LocalParameterization`
#if CERES_VERSION_MAJOR > 2 || (CERES_VERSION_MAJOR == 2 && CERES_VERSION_MINOR >= 1)
using ParameterizationType = ceres::EigenQuaternionManifold;
using ParameterizationPtr = ceres::Manifold*;
#else
using ParameterizationType = ceres::EigenQuaternionParameterization;
using ParameterizationPtr = ceres::LocalParameterization*;
#endif

#endif // TYPE_H
