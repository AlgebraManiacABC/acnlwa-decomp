#ifndef ACNLWA_GUI_GRIDKEYSET_H
#define ACNLWA_GUI_GRIDKEYSET_H

#include "acnlwa/gui/KeySet.h"

namespace gui {

class GridKeySet : public ::gui::KeySet {
public:
    virtual ~GridKeySet();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace gui

#endif  // ACNLWA_GUI_GRIDKEYSET_H
