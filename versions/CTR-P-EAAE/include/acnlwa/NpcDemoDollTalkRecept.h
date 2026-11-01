#ifndef ACNLWA_NPCDEMODOLLTALKRECEPT_H
#define ACNLWA_NPCDEMODOLLTALKRECEPT_H

#include "acnlwa/NpcTalkRecept.h"

class NpcDemoDollTalkRecept : public ::NpcTalkRecept {
public:
    virtual ~NpcDemoDollTalkRecept();
    virtual void ITalkRecept_VF12();
    virtual void ITalkRecept_VF13();
    virtual void ITalkRecept_VF17();
    virtual void ITalkRecept_VF34();
    virtual unsigned int VF70();
    virtual unsigned int VF78();
    virtual void VF80(unsigned int);
    virtual void VF81();
    virtual unsigned int VF82();
    virtual unsigned int VF83();
    virtual void VF84();
    virtual void VF85();
    virtual unsigned int VF86();
};

#endif  // ACNLWA_NPCDEMODOLLTALKRECEPT_H
