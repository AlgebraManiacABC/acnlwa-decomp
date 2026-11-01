#ifndef ACNLWA_NW_GFX_BASICRENDERQUEUE_H
#define ACNLWA_NW_GFX_BASICRENDERQUEUE_H

#include "acnlwa/nw/gfx/GfxObject.h"

namespace nw {
namespace gfx {

template <typename T0, typename T1, typename T2>
class BasicRenderQueue : public ::nw::gfx::GfxObject {
public:
    virtual ~BasicRenderQueue();
    virtual void VF02();
};

template <typename T0, typename T1, typename T2>
BasicRenderQueue<T0, T1, T2>::~BasicRenderQueue() {}

template <typename T0, typename T1, typename T2>
void BasicRenderQueue<T0, T1, T2>::VF02() {}


}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_BASICRENDERQUEUE_H
