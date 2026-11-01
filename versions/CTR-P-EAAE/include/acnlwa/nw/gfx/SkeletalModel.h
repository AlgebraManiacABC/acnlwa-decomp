#ifndef ACNLWA_NW_GFX_SKELETALMODEL_H
#define ACNLWA_NW_GFX_SKELETALMODEL_H

#include "acnlwa/nw/gfx/Model.h"

namespace nw {
namespace gfx {

class SkeletalModel : public ::nw::gfx::Model {
public:
    virtual ~SkeletalModel();
    virtual void VF02();
    virtual void VF04();
    virtual void VF09();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_SKELETALMODEL_H
