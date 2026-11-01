#ifndef ACNLWA_SOUNDOBJCAR_H
#define ACNLWA_SOUNDOBJCAR_H

#include "acnlwa/SoundObj.h"

class SoundObjCar : public ::SoundObj<3> {
public:
    virtual ~SoundObjCar();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
};

#endif  // ACNLWA_SOUNDOBJCAR_H
