#ifndef ACNLWA_SSYS_MA_LYT_ARCRESOURCEACCESSORVRAM_H
#define ACNLWA_SSYS_MA_LYT_ARCRESOURCEACCESSORVRAM_H

#include "acnlwa/nw/lyt/ArcResourceAccessor.h"

namespace ssys {
namespace ma {
namespace lyt {

class ArcResourceAccessorVRAM : public ::nw::lyt::ArcResourceAccessor {
public:
    virtual ~ArcResourceAccessorVRAM();
    virtual void VF05();
};

}  // namespace lyt
}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_LYT_ARCRESOURCEACCESSORVRAM_H
