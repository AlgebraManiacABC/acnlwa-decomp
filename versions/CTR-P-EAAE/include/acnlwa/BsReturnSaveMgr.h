#ifndef ACNLWA_BSRETURNSAVEMGR_H
#define ACNLWA_BSRETURNSAVEMGR_H

#include "acnlwa/Base.h"
#include "acnlwa/script/ITalkRecept.h"

class BsReturnSaveMgr : public ::Base, public ::script::ITalkRecept {
public:
    virtual ~BsReturnSaveMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
};

#endif  // ACNLWA_BSRETURNSAVEMGR_H
