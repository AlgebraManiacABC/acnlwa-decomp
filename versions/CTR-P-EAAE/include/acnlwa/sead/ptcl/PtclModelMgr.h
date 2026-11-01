#ifndef ACNLWA_SEAD_PTCL_PTCLMODELMGR_H
#define ACNLWA_SEAD_PTCL_PTCLMODELMGR_H

#include "acnlwa/sead/hostio/Node.h"

namespace sead {
namespace ptcl {

class PtclModelMgr : public ::sead::hostio::Node {
public:
    virtual void VF00();
    virtual ~PtclModelMgr();
};

}  // namespace ptcl
}  // namespace sead

#endif  // ACNLWA_SEAD_PTCL_PTCLMODELMGR_H
