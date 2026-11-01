#ifndef ACNLWA_NW_GFX_BASEANIMEVALUATOR_H
#define ACNLWA_NW_GFX_BASEANIMEVALUATOR_H

#include "acnlwa/nw/gfx/AnimObject.h"

namespace nw {
namespace gfx {

class BaseAnimEvaluator : public ::nw::gfx::AnimObject {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual ~BaseAnimEvaluator();
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_BASEANIMEVALUATOR_H
