#ifndef ACNLWA_ACNPCDEMODOLLBASE_H
#define ACNLWA_ACNPCDEMODOLLBASE_H

#include "acnlwa/AcNpc.h"

class AcNpcDemoDollBase : public ::AcNpc {
public:
    virtual ~AcNpcDemoDollBase();
    virtual unsigned int Process_VF09();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF34();
    virtual void VF67();
    virtual void VF68();
    virtual void VF72();
    virtual bool VF89() = 0;
    virtual void VF90() = 0;
};

#endif  // ACNLWA_ACNPCDEMODOLLBASE_H
