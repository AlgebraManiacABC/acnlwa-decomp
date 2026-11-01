#ifndef ACNLWA_SEAD_PTCL_EMITTERSIMPLECALC_H
#define ACNLWA_SEAD_PTCL_EMITTERSIMPLECALC_H

#include "acnlwa/sead/ptcl/EmitterCalc.h"

namespace sead {
namespace ptcl {

class EmitterSimpleCalc : public ::sead::ptcl::EmitterCalc {
public:
    virtual void VF00();
};

}  // namespace ptcl
}  // namespace sead

#endif  // ACNLWA_SEAD_PTCL_EMITTERSIMPLECALC_H
