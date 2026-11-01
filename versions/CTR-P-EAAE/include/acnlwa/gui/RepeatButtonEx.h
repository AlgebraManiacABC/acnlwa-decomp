#ifndef ACNLWA_GUI_REPEATBUTTONEX_H
#define ACNLWA_GUI_REPEATBUTTONEX_H

#include "acnlwa/gui/ButtonEx.h"

namespace gui {

class RepeatButtonEx : public ::gui::ButtonEx {
public:
    virtual ~RepeatButtonEx();
    virtual void VF03();
    virtual void VF10();
    virtual void VF11();
};

}  // namespace gui

#endif  // ACNLWA_GUI_REPEATBUTTONEX_H
