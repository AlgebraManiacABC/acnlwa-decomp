#ifndef ACNLWA_BSPIKOHANOBJMGR_H
#define ACNLWA_BSPIKOHANOBJMGR_H

#include "acnlwa/Base.h"

class BsPikoHanObjMgr : public ::Base {
public:
    virtual ~BsPikoHanObjMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSPIKOHANOBJMGR_H
