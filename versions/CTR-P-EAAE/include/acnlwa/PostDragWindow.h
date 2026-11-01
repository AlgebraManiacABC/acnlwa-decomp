#ifndef ACNLWA_POSTDRAGWINDOW_H
#define ACNLWA_POSTDRAGWINDOW_H

#include "acnlwa/state/Mode.h"

class PostDragWindow : public ::state::Mode< ::PostDragWindow> {
public:
    virtual ~PostDragWindow();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_POSTDRAGWINDOW_H
