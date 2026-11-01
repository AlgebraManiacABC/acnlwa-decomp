#ifndef ACNLWA_SEAD_PTCL_PTCLLOADCHECK_H
#define ACNLWA_SEAD_PTCL_PTCLLOADCHECK_H

#include "acnlwa/sead/hostio/Node.h"

namespace sead {
namespace ptcl {

class PtclLoadCheck : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

}  // namespace ptcl
}  // namespace sead

#endif  // ACNLWA_SEAD_PTCL_PTCLLOADCHECK_H
