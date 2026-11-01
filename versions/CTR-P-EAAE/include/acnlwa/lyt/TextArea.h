#ifndef ACNLWA_LYT_TEXTAREA_H
#define ACNLWA_LYT_TEXTAREA_H

#include "acnlwa/lyt/Object.h"

namespace lyt {

class TextArea : public ::lyt::Object {
public:
    virtual ~TextArea();
    virtual void VF02();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
};

}  // namespace lyt

#endif  // ACNLWA_LYT_TEXTAREA_H
