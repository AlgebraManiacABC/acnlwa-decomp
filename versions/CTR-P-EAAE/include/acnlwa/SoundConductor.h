#ifndef ACNLWA_SOUNDCONDUCTOR_H
#define ACNLWA_SOUNDCONDUCTOR_H

#include "acnlwa/SoundIHaniwaControl.h"

class SoundConductor : public ::SoundIHaniwaControl {
public:
    virtual ~SoundConductor();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

#endif  // ACNLWA_SOUNDCONDUCTOR_H
