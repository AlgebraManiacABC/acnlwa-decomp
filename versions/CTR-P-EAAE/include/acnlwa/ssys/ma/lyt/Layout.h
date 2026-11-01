#ifndef ACNLWA_SSYS_MA_LYT_LAYOUT_H
#define ACNLWA_SSYS_MA_LYT_LAYOUT_H

#include "acnlwa/ssys/ma/lyt/Base2D.h"

namespace ssys {
namespace ma {
namespace lyt {

class Layout : public ::ssys::ma::lyt::Base2D {
public:
    virtual ~Layout();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace lyt
}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_LYT_LAYOUT_H
