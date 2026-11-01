#ifndef ACNLWA_FADERWIPE_H
#define ACNLWA_FADERWIPE_H

#include "acnlwa/ssys/co/FaderBase.h"

class FaderWipe : public ::ssys::co::FaderBase {
public:
    virtual ~FaderWipe();
    virtual void VF02();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_FADERWIPE_H
