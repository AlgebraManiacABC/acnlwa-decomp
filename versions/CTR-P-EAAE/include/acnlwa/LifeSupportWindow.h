#ifndef ACNLWA_LIFESUPPORTWINDOW_H
#define ACNLWA_LIFESUPPORTWINDOW_H

#include "acnlwa/state/Mode.h"
#include "acnlwa/SoPaCaWindowBase.h"

class LifeSupportWindow : public ::state::Mode< ::LifeSupportWindow>, public ::SoPaCaWindowBase {
public:
    virtual ~LifeSupportWindow();
    virtual void Mode_VF02();
    virtual void LifeSupportWindow_VF03();
    virtual void LifeSupportWindow_VF04();
    virtual void LifeSupportWindow_VF05();
    virtual void LifeSupportWindow_VF06();
    virtual void LifeSupportWindow_VF07();
    virtual void LifeSupportWindow_VF08();
    virtual void LifeSupportWindow_VF09();
    virtual void VF10();
};

#endif  // ACNLWA_LIFESUPPORTWINDOW_H
