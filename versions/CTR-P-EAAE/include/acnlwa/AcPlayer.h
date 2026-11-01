#ifndef ACNLWA_ACPLAYER_H
#define ACNLWA_ACPLAYER_H

#include "acnlwa/UtlBase.h"
#include "acnlwa/DemoActor.h"
#include "acnlwa/PlayerSimpleMessage.h"
#include "acnlwa/ObjcBody.h"

class AcPlayer : public ::UtlBase< ::DemoActor>, public ::PlayerSimpleMessage {
public:
    class ToolFunctor : public ::ObjcBody::Functor {
    public:
        virtual ~ToolFunctor();
        virtual void VF02();
    };

    virtual ~AcPlayer();
    virtual void Process_VF04();
    virtual bool Process_VF08();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void Actor_VF16();
    virtual unsigned int DemoActor_VF23();
    virtual unsigned int UtlBase_VF30();
    virtual unsigned int UtlBase_VF31();
    virtual void UtlBase_VF32();
    virtual unsigned int UtlBase_VF33();
    virtual unsigned int UtlBase_VF34();
    virtual unsigned int UtlBase_VF35();
};

#endif  // ACNLWA_ACPLAYER_H
