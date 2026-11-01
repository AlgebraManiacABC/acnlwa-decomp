#ifndef ACNLWA_BSDEMOCANCELMGR_H
#define ACNLWA_BSDEMOCANCELMGR_H

#include "acnlwa/Base.h"

class BsDemoCancelMgr : public ::Base {
public:
    virtual ~BsDemoCancelMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSDEMOCANCELMGR_H
