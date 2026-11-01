#ifndef ACNLWA_GUI_REPEATBUTTONEX2_H
#define ACNLWA_GUI_REPEATBUTTONEX2_H

#include "acnlwa/gui/ButtonEx.h"

namespace gui {

class RepeatButtonEx2 : public ::gui::ButtonEx {
public:
    virtual ~RepeatButtonEx2();
    virtual void VF03();
    virtual void VF07();
    virtual void VF10();
    virtual void VF11();
};

}  // namespace gui

#endif  // ACNLWA_GUI_REPEATBUTTONEX2_H
