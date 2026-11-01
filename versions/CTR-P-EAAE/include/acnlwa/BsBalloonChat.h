#ifndef ACNLWA_BSBALLOONCHAT_H
#define ACNLWA_BSBALLOONCHAT_H

#include "acnlwa/Base.h"

class BsBalloonChat : public ::Base {
public:
    virtual ~BsBalloonChat();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSBALLOONCHAT_H
