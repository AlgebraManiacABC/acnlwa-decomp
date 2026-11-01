#ifndef ACNLWA_BSSHOWMGR_H
#define ACNLWA_BSSHOWMGR_H

#include "acnlwa/Base.h"

class BsShowMgr : public ::Base {
public:
    virtual ~BsShowMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSSHOWMGR_H
