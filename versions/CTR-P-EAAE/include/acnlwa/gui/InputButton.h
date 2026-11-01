#ifndef ACNLWA_GUI_INPUTBUTTON_H
#define ACNLWA_GUI_INPUTBUTTON_H

#include "acnlwa/gui/TchOnButton.h"

namespace gui {

class InputButton : public ::gui::TchOnButton {
public:
    virtual ~InputButton();
    virtual void VF03();
    virtual void VF04();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF15();
    virtual void VF16();
};

}  // namespace gui

#endif  // ACNLWA_GUI_INPUTBUTTON_H
