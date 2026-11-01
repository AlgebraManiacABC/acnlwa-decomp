#ifndef ACNLWA_BSOBJCHECKMGR_H
#define ACNLWA_BSOBJCHECKMGR_H

#include "acnlwa/Base.h"

class BsObjCheckMgr : public ::Base {
public:
    virtual ~BsObjCheckMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSOBJCHECKMGR_H
