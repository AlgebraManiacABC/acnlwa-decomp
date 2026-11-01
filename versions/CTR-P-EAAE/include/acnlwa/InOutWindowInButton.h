#ifndef ACNLWA_INOUTWINDOWINBUTTON_H
#define ACNLWA_INOUTWINDOWINBUTTON_H

#include "acnlwa/InOutWindow.h"

template <int T0>
class InOutWindowInButton : public ::InOutWindow {
public:
    virtual ~InOutWindowInButton();
    virtual unsigned int VF06();
    virtual void VF11();
    virtual void VF13() = 0;
    virtual void VF14() = 0;
    virtual void VF15() = 0;
    virtual void VF16();
};

template <int T0>
InOutWindowInButton<T0>::~InOutWindowInButton() {}

template <int T0>
unsigned int InOutWindowInButton<T0>::VF06() {}

template <int T0>
void InOutWindowInButton<T0>::VF11() {}

template <int T0>
void InOutWindowInButton<T0>::VF16() {}


#endif  // ACNLWA_INOUTWINDOWINBUTTON_H
