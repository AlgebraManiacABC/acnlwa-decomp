#ifndef ACNLWA_ACTOR_H
#define ACNLWA_ACTOR_H

#include "acnlwa/Base.h"

class Actor : public ::Base {
public:
    virtual ~Actor();
    virtual int Process_VF02();
    virtual void Process_VF04();
    virtual int Process_VF05();
    virtual void Process_VF07();
    virtual bool Process_VF08();
    virtual void Process_VF10();
    virtual int Process_VF11();
    virtual void Process_VF13();
    virtual void Base_VF15();
    virtual void Actor_VF16();
};

#endif  // ACNLWA_ACTOR_H
