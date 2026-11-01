#ifndef ACNLWA_GUI_RADIOBUTTONEX_H
#define ACNLWA_GUI_RADIOBUTTONEX_H

#include "acnlwa/gui/ButtonEx.h"

namespace gui {

class RadioButtonEx : public ::gui::ButtonEx {
public:
    virtual ~RadioButtonEx();
    virtual void VF03();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace gui

#endif  // ACNLWA_GUI_RADIOBUTTONEX_H
