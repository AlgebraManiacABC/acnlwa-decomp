#ifndef ACNLWA_BSNAMEWINDOW_H
#define ACNLWA_BSNAMEWINDOW_H

#include "acnlwa/Base.h"

class BsNameWindow : public ::Base {
public:
    virtual ~BsNameWindow();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSNAMEWINDOW_H
