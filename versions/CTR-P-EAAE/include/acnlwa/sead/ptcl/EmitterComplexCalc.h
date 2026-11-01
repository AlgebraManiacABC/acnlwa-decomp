#ifndef ACNLWA_SEAD_PTCL_EMITTERCOMPLEXCALC_H
#define ACNLWA_SEAD_PTCL_EMITTERCOMPLEXCALC_H

#include "acnlwa/sead/ptcl/EmitterSimpleCalc.h"

namespace sead {
namespace ptcl {

class EmitterComplexCalc : public ::sead::ptcl::EmitterSimpleCalc {
public:
    virtual void VF00();
};

}  // namespace ptcl
}  // namespace sead

#endif  // ACNLWA_SEAD_PTCL_EMITTERCOMPLEXCALC_H
