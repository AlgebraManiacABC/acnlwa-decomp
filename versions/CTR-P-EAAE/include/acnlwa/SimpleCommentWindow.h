#ifndef ACNLWA_SIMPLECOMMENTWINDOW_H
#define ACNLWA_SIMPLECOMMENTWINDOW_H

#include "acnlwa/ExplainWindow.h"

class SimpleCommentWindow : public ::ExplainWindow {
public:
    virtual ~SimpleCommentWindow();
    virtual void VF04();
    virtual unsigned int VF06();
    virtual void VF10();
    virtual void VF11();
};

#endif  // ACNLWA_SIMPLECOMMENTWINDOW_H
