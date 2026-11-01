#ifndef ACNLWA_BSNPCMGR_H
#define ACNLWA_BSNPCMGR_H

#include "acnlwa/Base.h"

class BsNpcMgr : public ::Base {
public:
    class NpcForeachFunction {
    public:
    };

    class NpcPosGetCB : public NpcForeachFunction {
    public:
        virtual void VF00();
    };

    class SearchFunction : public NpcForeachFunction {
    public:
        virtual void VF00();
    };

    virtual ~BsNpcMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSNPCMGR_H
