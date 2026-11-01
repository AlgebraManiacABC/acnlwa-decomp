#ifndef ACNLWA_EXPLAINWINDOW_H
#define ACNLWA_EXPLAINWINDOW_H

#include "acnlwa/InOutWindow.h"

class ExplainWindow : public ::InOutWindow {
public:
    virtual ~ExplainWindow();
    virtual void VF04();
    virtual void VF10();
};

#endif  // ACNLWA_EXPLAINWINDOW_H
