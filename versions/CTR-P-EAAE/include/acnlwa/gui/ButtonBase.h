#ifndef ACNLWA_GUI_BUTTONBASE_H
#define ACNLWA_GUI_BUTTONBASE_H

#include "acnlwa/gui/Widget.h"

namespace gui {

class ButtonBase : public ::gui::Widget {
public:
    virtual ~ButtonBase();
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
    virtual void VF14();
};

}  // namespace gui

#endif  // ACNLWA_GUI_BUTTONBASE_H
