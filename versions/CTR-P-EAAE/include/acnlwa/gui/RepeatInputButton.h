#ifndef ACNLWA_GUI_REPEATINPUTBUTTON_H
#define ACNLWA_GUI_REPEATINPUTBUTTON_H

#include "acnlwa/gui/RepeatButtonEx.h"

namespace gui {

class RepeatInputButton : public ::gui::RepeatButtonEx {
public:
    virtual ~RepeatInputButton();
    virtual void VF03();
    virtual void VF10();
    virtual void VF11();
};

}  // namespace gui

#endif  // ACNLWA_GUI_REPEATINPUTBUTTON_H
