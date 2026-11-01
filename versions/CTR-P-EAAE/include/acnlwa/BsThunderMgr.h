#ifndef ACNLWA_BSTHUNDERMGR_H
#define ACNLWA_BSTHUNDERMGR_H

#include "acnlwa/Base.h"

class BsThunderMgr : public ::Base {
public:
    virtual ~BsThunderMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSTHUNDERMGR_H
