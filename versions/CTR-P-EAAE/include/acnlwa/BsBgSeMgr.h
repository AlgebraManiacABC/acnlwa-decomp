#ifndef ACNLWA_BSBGSEMGR_H
#define ACNLWA_BSBGSEMGR_H

#include "acnlwa/Base.h"

class BsBgSeMgr : public ::Base {
public:
    virtual ~BsBgSeMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSBGSEMGR_H
