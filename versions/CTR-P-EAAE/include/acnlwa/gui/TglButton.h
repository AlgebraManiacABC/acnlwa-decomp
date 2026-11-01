#ifndef ACNLWA_GUI_TGLBUTTON_H
#define ACNLWA_GUI_TGLBUTTON_H

#include "acnlwa/gui/ButtonEx.h"

namespace gui {

class TglButton : public ::gui::ButtonEx {
public:
    virtual ~TglButton();
    virtual void VF03();
    virtual void VF04();
    virtual void VF07();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace gui

#endif  // ACNLWA_GUI_TGLBUTTON_H
