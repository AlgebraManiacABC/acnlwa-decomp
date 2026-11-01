#ifndef ACNLWA_LYT_ANMOBJECT_H
#define ACNLWA_LYT_ANMOBJECT_H

#include "acnlwa/ut/FrameController.h"

namespace lyt {

class AnmObject : public ::ut::FrameController {
public:
    virtual ~AnmObject();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
};

}  // namespace lyt

#endif  // ACNLWA_LYT_ANMOBJECT_H
