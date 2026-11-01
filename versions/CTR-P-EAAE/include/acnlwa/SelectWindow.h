#ifndef ACNLWA_SELECTWINDOW_H
#define ACNLWA_SELECTWINDOW_H

#include "acnlwa/state/Mode.h"

class SelectWindow : public ::state::Mode< ::SelectWindow> {
public:
    virtual ~SelectWindow();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_SELECTWINDOW_H
