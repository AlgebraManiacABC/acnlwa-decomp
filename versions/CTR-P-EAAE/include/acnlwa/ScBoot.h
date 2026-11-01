#ifndef ACNLWA_SCBOOT_H
#define ACNLWA_SCBOOT_H

#include "acnlwa/BsScene.h"

class ScBoot : public ::BsScene {
public:
    virtual ~ScBoot();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual bool Process_VF08();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF16();
};

#endif  // ACNLWA_SCBOOT_H
