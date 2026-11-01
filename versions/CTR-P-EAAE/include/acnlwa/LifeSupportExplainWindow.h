#ifndef ACNLWA_LIFESUPPORTEXPLAINWINDOW_H
#define ACNLWA_LIFESUPPORTEXPLAINWINDOW_H

#include "acnlwa/InOutWindow.h"

class LifeSupportExplainWindow : public ::InOutWindow {
public:
    virtual ~LifeSupportExplainWindow();
    virtual unsigned int VF06();
    virtual void VF10();
};

#endif  // ACNLWA_LIFESUPPORTEXPLAINWINDOW_H
