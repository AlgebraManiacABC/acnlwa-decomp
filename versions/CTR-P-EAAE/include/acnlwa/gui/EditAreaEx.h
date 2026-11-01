#ifndef ACNLWA_GUI_EDITAREAEX_H
#define ACNLWA_GUI_EDITAREAEX_H

#include "acnlwa/gui/EditArea.h"

namespace gui {

class EditAreaEx : public ::gui::EditArea {
public:
    virtual ~EditAreaEx();
    virtual void VF10();
    virtual void VF11();
};

}  // namespace gui

#endif  // ACNLWA_GUI_EDITAREAEX_H
