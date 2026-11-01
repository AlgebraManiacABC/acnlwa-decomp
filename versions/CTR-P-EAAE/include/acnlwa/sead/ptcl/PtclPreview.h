#ifndef ACNLWA_SEAD_PTCL_PTCLPREVIEW_H
#define ACNLWA_SEAD_PTCL_PTCLPREVIEW_H

#include "acnlwa/sead/hostio/Node.h"

namespace sead {
namespace ptcl {

class PtclPreview : public ::sead::hostio::Node {
public:
    virtual void VF00();
    virtual ~PtclPreview();
};

}  // namespace ptcl
}  // namespace sead

#endif  // ACNLWA_SEAD_PTCL_PTCLPREVIEW_H
