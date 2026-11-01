#ifndef ACNLWA_BSFISHFIELDMGR_H
#define ACNLWA_BSFISHFIELDMGR_H

#include "acnlwa/Base.h"

class BsFishFieldMgr : public ::Base {
public:
    virtual ~BsFishFieldMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSFISHFIELDMGR_H
