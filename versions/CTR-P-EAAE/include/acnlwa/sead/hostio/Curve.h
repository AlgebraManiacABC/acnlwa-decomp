#ifndef ACNLWA_SEAD_HOSTIO_CURVE_H
#define ACNLWA_SEAD_HOSTIO_CURVE_H

#include "acnlwa/sead/hostio/ICurve.h"

namespace sead {
namespace hostio {

template <typename T0>
class Curve : public ::sead::hostio::ICurve {
public:
    virtual void VF00();
    virtual void VF01();
};

template <typename T0>
void Curve<T0>::VF00() {}

template <typename T0>
void Curve<T0>::VF01() {}


}  // namespace hostio
}  // namespace sead

#endif  // ACNLWA_SEAD_HOSTIO_CURVE_H
