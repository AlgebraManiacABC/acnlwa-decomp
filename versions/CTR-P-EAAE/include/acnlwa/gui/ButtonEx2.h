#ifndef ACNLWA_GUI_BUTTONEX2_H
#define ACNLWA_GUI_BUTTONEX2_H

#include "acnlwa/gui/ButtonEx.h"

namespace gui {

class ButtonEx2 : public ::gui::ButtonEx {
public:
    virtual ~ButtonEx2();
    virtual void VF03();
    virtual void VF04();
    virtual void VF07();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace gui

#endif  // ACNLWA_GUI_BUTTONEX2_H
