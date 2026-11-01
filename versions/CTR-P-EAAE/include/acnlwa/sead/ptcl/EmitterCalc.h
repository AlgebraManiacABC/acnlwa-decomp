#ifndef ACNLWA_SEAD_PTCL_EMITTERCALC_H
#define ACNLWA_SEAD_PTCL_EMITTERCALC_H

namespace sead {
namespace ptcl {

class EmitterCalc {
public:
    virtual void VF00() = 0;
};

}  // namespace ptcl
}  // namespace sead

#endif  // ACNLWA_SEAD_PTCL_EMITTERCALC_H
