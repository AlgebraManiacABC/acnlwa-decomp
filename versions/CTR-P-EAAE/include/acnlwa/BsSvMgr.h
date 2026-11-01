#ifndef ACNLWA_BSSVMGR_H
#define ACNLWA_BSSVMGR_H

#include "acnlwa/Base.h"
#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/state/Mode.h"
#include "acnlwa/SvStep.h"

class BsSvMgr : public ::Base, public ::script::ITalkRecept, public ::state::Mode< ::BsSvMgr> {
public:
    class SaveStep : public ::SvStep< ::BsSvMgr,SaveStep> {
    public:
        virtual ~SaveStep();
        virtual void VF03();
        virtual void VF04();
    };

    virtual ~BsSvMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual void BsSvMgr_VF16();
    virtual void BsSvMgr_VF17();
};

#endif  // ACNLWA_BSSVMGR_H
