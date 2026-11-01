#ifndef ACNLWA_FADERCOLOR_H
#define ACNLWA_FADERCOLOR_H

#include "acnlwa/ssys/co/FaderBase.h"

class FaderColor : public ::ssys::co::FaderBase {
public:
    virtual ~FaderColor();
    virtual void VF02();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_FADERCOLOR_H
