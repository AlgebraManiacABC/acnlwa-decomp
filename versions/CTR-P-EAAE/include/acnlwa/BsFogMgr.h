#ifndef ACNLWA_BSFOGMGR_H
#define ACNLWA_BSFOGMGR_H

#include "acnlwa/Base.h"

class BsFogMgr : public ::Base {
public:
    virtual ~BsFogMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void Base_VF15();
};

#endif  // ACNLWA_BSFOGMGR_H
