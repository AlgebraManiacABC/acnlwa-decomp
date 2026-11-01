#ifndef ACNLWA_CHANGEMENUWINDOW_H
#define ACNLWA_CHANGEMENUWINDOW_H

#include "acnlwa/InOutWindowInButton.h"

class ChangeMenuWindow : public ::InOutWindowInButton<3> {
public:
    virtual ~ChangeMenuWindow();
    virtual void VF07();
    virtual void VF08();
    virtual void VF11();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
};

#endif  // ACNLWA_CHANGEMENUWINDOW_H
