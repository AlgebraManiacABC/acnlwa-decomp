#ifndef ACNLWA_NPCTALKRECEPT_H
#define ACNLWA_NPCTALKRECEPT_H

#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/script/IFlowRecept.h"
#include "acnlwa/sead/IDelegateR.h"

class NpcTalkRecept : private ::script::ITalkRecept, private ::script::IFlowRecept {
public:
    class AsyncSaveHandleHook : public ::sead::IDelegateR<bool> {
    public:
        virtual void VF00();
        virtual void VF01();
    };

    class ExeHookFuncBase {
    public:
    };

    template <typename T0>
    class ExeHookFunc : public ExeHookFuncBase {
    public:
        virtual void VF00();
    };

    virtual ~NpcTalkRecept();
    virtual void ITalkRecept_VF09();
    virtual void ITalkRecept_VF10();
    virtual void ITalkRecept_VF11();
    virtual void ITalkRecept_VF12();
    virtual void ITalkRecept_VF13();
    virtual void ITalkRecept_VF14();
    virtual void ITalkRecept_VF15();
    virtual void ITalkRecept_VF16();
    virtual void ITalkRecept_VF34();
    virtual void ITalkRecept_VF37();
    virtual void ITalkRecept_VF38();
    virtual void ITalkRecept_VF39();
    virtual void ITalkRecept_VF40();
    virtual void ITalkRecept_VF41();
    virtual void ITalkRecept_VF42();
    virtual void ITalkRecept_VF43();
    virtual void ITalkRecept_VF44();
    virtual unsigned int ITalkRecept_VF45();
    virtual void ITalkRecept_VF48();
    virtual void ITalkRecept_VF54();
    virtual void ITalkRecept_VF55();
    virtual void ITalkRecept_VF56();
    virtual void ITalkRecept_VF57();
    virtual void ITalkRecept_VF59();
    virtual void ITalkRecept_VF60();
    virtual void ITalkRecept_VF61();
    virtual void ITalkRecept_VF62(unsigned char *);
    virtual void VF63();
    virtual void VF64();
    virtual void VF65();
    virtual void VF66();
    virtual void VF67();
    virtual void VF68();
    virtual void VF69();
    virtual unsigned int VF70();
    virtual void VF71();
    virtual void VF72();
    virtual void VF73();
    virtual void VF74();
    virtual void VF75();
    virtual void VF76();
    virtual void VF77();
    virtual unsigned int VF78();
    virtual void VF79();
};

#endif  // ACNLWA_NPCTALKRECEPT_H
