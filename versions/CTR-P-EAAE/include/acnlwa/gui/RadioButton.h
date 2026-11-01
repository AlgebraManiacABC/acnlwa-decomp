#ifndef ACNLWA_GUI_RADIOBUTTON_H
#define ACNLWA_GUI_RADIOBUTTON_H

#include "acnlwa/gui/ButtonBase.h"

namespace gui {

class RadioButton : public ::gui::ButtonBase {
public:
    virtual ~RadioButton();
    virtual void VF02();
    virtual void VF03();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
};

}  // namespace gui

#endif  // ACNLWA_GUI_RADIOBUTTON_H
