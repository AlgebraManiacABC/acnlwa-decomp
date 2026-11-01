#ifndef ACNLWA_ACNPCSP_H
#define ACNLWA_ACNPCSP_H

#include "acnlwa/AcNpc.h"
#include "acnlwa/sead/hostio/Node.h"

class AcNpcSp : public ::AcNpc {
public:
    class AcNpcSpHioNode : public ::sead::hostio::Node {
    public:
        virtual ~AcNpcSpHioNode();
    };

    virtual ~AcNpcSp();
    virtual unsigned int Process_VF09();
    virtual unsigned int UtlBase_VF30();
    virtual void UtlBase_VF32();
    virtual void VF45();
    virtual void VF61();
    virtual void VF62();
    virtual void VF63();
    virtual void VF64();
    virtual void VF70();
    virtual void VF84();
};

#endif  // ACNLWA_ACNPCSP_H
