#ifndef ACNLWA_ADDRESSSELECTWINDOW_H
#define ACNLWA_ADDRESSSELECTWINDOW_H

#include "acnlwa/state/Mode.h"

class AddressSelectWindow : public ::state::Mode< ::AddressSelectWindow> {
public:
    virtual ~AddressSelectWindow();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_ADDRESSSELECTWINDOW_H
