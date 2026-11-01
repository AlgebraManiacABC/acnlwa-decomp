#ifndef ACNLWA_SOUNDOBJFURNITURE_H
#define ACNLWA_SOUNDOBJFURNITURE_H

#include "acnlwa/SoundObj.h"

class SoundObjFurniture : public ::SoundObj<2> {
public:
    virtual ~SoundObjFurniture();
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
    virtual void VF14();
    virtual void VF15();
};

#endif  // ACNLWA_SOUNDOBJFURNITURE_H
