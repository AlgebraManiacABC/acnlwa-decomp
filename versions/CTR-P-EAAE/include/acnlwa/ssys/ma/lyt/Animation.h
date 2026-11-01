#ifndef ACNLWA_SSYS_MA_LYT_ANIMATION_H
#define ACNLWA_SSYS_MA_LYT_ANIMATION_H

#include "acnlwa/ssys/ma/lyt/FrameCtrl.h"

namespace ssys {
namespace ma {
namespace lyt {

class Animation : public ::ssys::ma::lyt::FrameCtrl {
public:
    virtual ~Animation();
    virtual void VF02();
};

}  // namespace lyt
}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_LYT_ANIMATION_H
