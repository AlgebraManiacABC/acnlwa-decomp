#ifndef ACNLWA_ATMWINDOW_H
#define ACNLWA_ATMWINDOW_H

#include "acnlwa/state/Mode.h"

class AtmWindow : public ::state::Mode< ::AtmWindow> {
public:
    virtual ~AtmWindow();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_ATMWINDOW_H
