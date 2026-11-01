#ifndef ACNLWA_BSFIREWORKMGR_H
#define ACNLWA_BSFIREWORKMGR_H

#include "acnlwa/Base.h"

class BsFireworkMgr : public ::Base {
public:
    virtual ~BsFireworkMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSFIREWORKMGR_H
