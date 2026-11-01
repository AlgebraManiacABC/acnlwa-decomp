#ifndef ACNLWA_BSTOURMGR_H
#define ACNLWA_BSTOURMGR_H

#include "acnlwa/Base.h"
#include "acnlwa/sead/hostio/Node.h"

class BsTourMgr : public ::Base {
public:
    class TourMgrHioNode : public ::sead::hostio::Node {
    public:
        virtual void VF00();
    };

    virtual ~BsTourMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSTOURMGR_H
