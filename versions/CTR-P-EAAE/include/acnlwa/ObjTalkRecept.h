#ifndef ACNLWA_OBJTALKRECEPT_H
#define ACNLWA_OBJTALKRECEPT_H

#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/script/IFlowRecept.h"

class ObjTalkRecept : private ::script::ITalkRecept, private ::script::IFlowRecept {
public:
    virtual ~ObjTalkRecept();
    virtual void ITalkRecept_VF37();
    virtual void ITalkRecept_VF38();
    virtual void ITalkRecept_VF39();
    virtual void ITalkRecept_VF40();
    virtual void ITalkRecept_VF41();
    virtual void ITalkRecept_VF43();
    virtual void ITalkRecept_VF62(unsigned char *);
    virtual void ObjTalkRecept_VF63();
    virtual void ObjTalkRecept_VF64();
    virtual void ObjTalkRecept_VF65();
    virtual void ObjTalkRecept_VF66();
    virtual void VF67();
    virtual void VF68();
    virtual void VF69();
    virtual void VF70();
    virtual void VF71();
};

#endif  // ACNLWA_OBJTALKRECEPT_H
