#ifndef ACNLWA_NW_GFX_TRANSFORMANIMBLENDOPQUAT_H
#define ACNLWA_NW_GFX_TRANSFORMANIMBLENDOPQUAT_H

#include "acnlwa/nw/gfx/TransformAnimBlendOp.h"

namespace nw {
namespace gfx {

class TransformAnimBlendOpQuat : public ::nw::gfx::TransformAnimBlendOp {
public:
    virtual ~TransformAnimBlendOpQuat();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_TRANSFORMANIMBLENDOPQUAT_H
