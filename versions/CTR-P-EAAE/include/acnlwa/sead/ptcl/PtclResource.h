#ifndef ACNLWA_SEAD_PTCL_PTCLRESOURCE_H
#define ACNLWA_SEAD_PTCL_PTCLRESOURCE_H

#include "acnlwa/sead/hostio/Node.h"

namespace sead {
namespace ptcl {

class PtclResource : public ::sead::hostio::Node {
public:
    virtual void VF00();
    virtual ~PtclResource();
};

}  // namespace ptcl
}  // namespace sead

#endif  // ACNLWA_SEAD_PTCL_PTCLRESOURCE_H
