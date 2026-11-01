#ifndef ACNLWA_SOUNDOBJWITHMELODY_H
#define ACNLWA_SOUNDOBJWITHMELODY_H

#include "acnlwa/SoundObj.h"

class SoundObjWithMelody : public ::SoundObj<1> {
public:
    virtual ~SoundObjWithMelody();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDOBJWITHMELODY_H
