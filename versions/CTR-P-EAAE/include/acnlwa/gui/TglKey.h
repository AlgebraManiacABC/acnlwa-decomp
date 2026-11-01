#ifndef ACNLWA_GUI_TGLKEY_H
#define ACNLWA_GUI_TGLKEY_H

#include "acnlwa/gui/Key.h"

namespace gui {

class TglKey : public ::gui::Key {
public:
    virtual ~TglKey();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace gui

#endif  // ACNLWA_GUI_TGLKEY_H
