#ifndef ACNLWA_GUI_NRMKEY_H
#define ACNLWA_GUI_NRMKEY_H

#include "acnlwa/gui/Key.h"

namespace gui {

class NrmKey : public ::gui::Key {
public:
    virtual ~NrmKey();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace gui

#endif  // ACNLWA_GUI_NRMKEY_H
