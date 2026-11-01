#ifndef ACNLWA_BSROOT_H
#define ACNLWA_BSROOT_H

#include "acnlwa/Base.h"

class BsRoot : public ::Base {
public:
    virtual ~BsRoot();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSROOT_H
