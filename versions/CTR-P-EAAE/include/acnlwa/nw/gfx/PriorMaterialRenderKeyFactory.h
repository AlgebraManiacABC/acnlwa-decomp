#ifndef ACNLWA_NW_GFX_PRIORMATERIALRENDERKEYFACTORY_H
#define ACNLWA_NW_GFX_PRIORMATERIALRENDERKEYFACTORY_H

#include "acnlwa/nw/gfx/BasicRenderKeyFactory.h"

namespace nw {
namespace gfx {

template <typename T0, typename T1>
class PriorMaterialRenderKeyFactory : public ::nw::gfx::BasicRenderKeyFactory<T0> {
public:
    virtual void VF00();
    virtual ~PriorMaterialRenderKeyFactory();
    virtual void VF03();
};

template <typename T0, typename T1>
void PriorMaterialRenderKeyFactory<T0, T1>::VF00() {}

template <typename T0, typename T1>
PriorMaterialRenderKeyFactory<T0, T1>::~PriorMaterialRenderKeyFactory() {}

template <typename T0, typename T1>
void PriorMaterialRenderKeyFactory<T0, T1>::VF03() {}


}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_PRIORMATERIALRENDERKEYFACTORY_H
