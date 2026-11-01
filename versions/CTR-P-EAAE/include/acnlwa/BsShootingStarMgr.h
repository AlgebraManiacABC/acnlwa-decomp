#ifndef ACNLWA_BSSHOOTINGSTARMGR_H
#define ACNLWA_BSSHOOTINGSTARMGR_H

#include "acnlwa/Base.h"

class BsShootingStarMgr : public ::Base {
public:
    virtual ~BsShootingStarMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSSHOOTINGSTARMGR_H
