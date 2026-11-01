#ifndef ACNLWA_DEMOACTOR_H
#define ACNLWA_DEMOACTOR_H

#include "acnlwa/Actor.h"
#include "acnlwa/ListNodeId.h"

class DemoActor : public ::Actor {
public:
    class ListNodeDemoActor : public ::ListNodeId {
    public:
        virtual ~ListNodeDemoActor();
    };

    virtual ~DemoActor();
    virtual int Process_VF02();
    virtual void Process_VF04();
    virtual int Process_VF05();
    virtual void DemoActor_VF17();
    virtual unsigned char DemoActor_VF18();
    virtual unsigned int DemoActor_VF19();
    virtual unsigned int DemoActor_VF20();
    virtual unsigned int DemoActor_VF21();
    virtual int * DemoActor_VF22();
    virtual unsigned int DemoActor_VF23();
    virtual unsigned int DemoActor_VF24();
    virtual unsigned int DemoActor_VF25();
    virtual unsigned int DemoActor_VF26();
    virtual bool DemoActor_VF27();
    virtual unsigned int DemoActor_VF28();
    virtual unsigned int DemoActor_VF29();
};

#endif  // ACNLWA_DEMOACTOR_H
