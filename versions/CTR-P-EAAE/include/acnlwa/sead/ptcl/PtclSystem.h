#ifndef ACNLWA_SEAD_PTCL_PTCLSYSTEM_H
#define ACNLWA_SEAD_PTCL_PTCLSYSTEM_H

#include "acnlwa/sead/hostio/Node.h"

namespace sead {
namespace ptcl {

class PtclSystem : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

}  // namespace ptcl
}  // namespace sead

#endif  // ACNLWA_SEAD_PTCL_PTCLSYSTEM_H
