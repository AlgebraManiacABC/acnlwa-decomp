#ifndef ACNLWA_GUI_TCHONBUTTONSP_H
#define ACNLWA_GUI_TCHONBUTTONSP_H

#include "acnlwa/gui/TchOnButton.h"

namespace gui {

class TchOnButtonSp : public ::gui::TchOnButton {
public:
    virtual ~TchOnButtonSp();
    virtual void VF03();
    virtual void VF04();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF15();
    virtual void VF16();
};

}  // namespace gui

#endif  // ACNLWA_GUI_TCHONBUTTONSP_H
