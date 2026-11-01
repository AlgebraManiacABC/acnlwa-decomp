#ifndef ACNLWA_ITEMSELECTWINDOW_H
#define ACNLWA_ITEMSELECTWINDOW_H

#include "acnlwa/state/Mode.h"

class ItemSelectWindow : public ::state::Mode< ::ItemSelectWindow> {
public:
    virtual ~ItemSelectWindow();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_ITEMSELECTWINDOW_H
