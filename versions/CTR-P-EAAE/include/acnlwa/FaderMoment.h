#ifndef ACNLWA_FADERMOMENT_H
#define ACNLWA_FADERMOMENT_H

#include "acnlwa/ssys/co/FaderBase.h"

class FaderMoment : public ::ssys::co::FaderBase {
public:
    virtual ~FaderMoment();
    virtual void VF02();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_FADERMOMENT_H
