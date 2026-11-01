#ifndef ACNLWA_GUI_QWERTYKEYSET_H
#define ACNLWA_GUI_QWERTYKEYSET_H

#include "acnlwa/gui/KeySet.h"

namespace gui {

class QwertyKeySet : public ::gui::KeySet {
public:
    virtual ~QwertyKeySet();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace gui

#endif  // ACNLWA_GUI_QWERTYKEYSET_H
