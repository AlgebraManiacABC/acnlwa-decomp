#ifndef ACNLWA_GUI_MULKEY_H
#define ACNLWA_GUI_MULKEY_H

#include "acnlwa/gui/Key.h"

namespace gui {

class MulKey : public ::gui::Key {
public:
    virtual ~MulKey();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace gui

#endif  // ACNLWA_GUI_MULKEY_H
