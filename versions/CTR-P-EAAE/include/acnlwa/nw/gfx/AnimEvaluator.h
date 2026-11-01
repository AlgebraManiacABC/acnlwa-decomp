#ifndef ACNLWA_NW_GFX_ANIMEVALUATOR_H
#define ACNLWA_NW_GFX_ANIMEVALUATOR_H

#include "acnlwa/nw/gfx/BaseAnimEvaluator.h"

namespace nw {
namespace gfx {

class AnimEvaluator : public ::nw::gfx::BaseAnimEvaluator {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual ~AnimEvaluator();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_ANIMEVALUATOR_H
