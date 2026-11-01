#ifndef ACNLWA_NW_GFX_STANDARDSKELETON_H
#define ACNLWA_NW_GFX_STANDARDSKELETON_H

#include "acnlwa/nw/gfx/Skeleton.h"

namespace nw {
namespace gfx {

class StandardSkeleton : public ::nw::gfx::Skeleton {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~StandardSkeleton();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_STANDARDSKELETON_H
