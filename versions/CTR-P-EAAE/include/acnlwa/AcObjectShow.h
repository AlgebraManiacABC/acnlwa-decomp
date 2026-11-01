#ifndef ACNLWA_ACOBJECTSHOW_H
#define ACNLWA_ACOBJECTSHOW_H

#include "acnlwa/Actor.h"
#include "acnlwa/ResourceGetSklMat.h"

class AcObjectShow : public ::Actor, public ::ResourceGetSklMat {
public:
    virtual ~AcObjectShow();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF17();
    virtual void VF18();
};

#endif  // ACNLWA_ACOBJECTSHOW_H
