#ifndef ACNLWA_BSCOCKROACHMGR_H
#define ACNLWA_BSCOCKROACHMGR_H

#include "acnlwa/Base.h"

class BsCockroachMgr : public ::Base {
public:
    virtual ~BsCockroachMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSCOCKROACHMGR_H
