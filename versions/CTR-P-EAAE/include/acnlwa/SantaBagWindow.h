#ifndef ACNLWA_SANTABAGWINDOW_H
#define ACNLWA_SANTABAGWINDOW_H

#include "acnlwa/state/Mode.h"

class SantaBagWindow : public ::state::Mode< ::SantaBagWindow> {
public:
    virtual ~SantaBagWindow();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_SANTABAGWINDOW_H
