#ifndef ACNLWA_ITEMDRAGWINDOW_H
#define ACNLWA_ITEMDRAGWINDOW_H

#include "acnlwa/state/Mode.h"

class ItemDragWindow : public ::state::Mode< ::ItemDragWindow> {
public:
    virtual ~ItemDragWindow();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_ITEMDRAGWINDOW_H
