#ifndef ACNLWA_BSINSECTFIELDMGR_H
#define ACNLWA_BSINSECTFIELDMGR_H

#include "acnlwa/Base.h"

class BsInsectFieldMgr : public ::Base {
public:
    virtual ~BsInsectFieldMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSINSECTFIELDMGR_H
