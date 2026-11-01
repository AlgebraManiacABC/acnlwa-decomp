#ifndef ACNLWA_MSGWINDOW_H
#define ACNLWA_MSGWINDOW_H

#include "acnlwa/state/Mode.h"

class MsgWindow : public ::state::Mode< ::MsgWindow> {
public:
    virtual ~MsgWindow();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_MSGWINDOW_H
