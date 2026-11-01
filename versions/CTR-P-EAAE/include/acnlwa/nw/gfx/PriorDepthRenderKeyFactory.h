#ifndef ACNLWA_NW_GFX_PRIORDEPTHRENDERKEYFACTORY_H
#define ACNLWA_NW_GFX_PRIORDEPTHRENDERKEYFACTORY_H

#include "acnlwa/nw/gfx/BasicRenderKeyFactory.h"

namespace nw {
namespace gfx {

template <typename T0, typename T1>
class PriorDepthRenderKeyFactory : public ::nw::gfx::BasicRenderKeyFactory<T0> {
public:
    virtual void VF00();
    virtual ~PriorDepthRenderKeyFactory();
    virtual void VF03();
};

template <typename T0, typename T1>
void PriorDepthRenderKeyFactory<T0, T1>::VF00() {}

template <typename T0, typename T1>
PriorDepthRenderKeyFactory<T0, T1>::~PriorDepthRenderKeyFactory() {}

template <typename T0, typename T1>
void PriorDepthRenderKeyFactory<T0, T1>::VF03() {}


}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_PRIORDEPTHRENDERKEYFACTORY_H
