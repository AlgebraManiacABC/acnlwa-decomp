#ifndef ACNLWA_SOUNDOBJHANIWA_H
#define ACNLWA_SOUNDOBJHANIWA_H

#include "acnlwa/SoundObj.h"

class SoundObjHaniwa : public ::SoundObj<2> {
public:
    virtual ~SoundObjHaniwa();
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

#endif  // ACNLWA_SOUNDOBJHANIWA_H
