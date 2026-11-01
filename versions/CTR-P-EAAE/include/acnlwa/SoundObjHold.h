#ifndef ACNLWA_SOUNDOBJHOLD_H
#define ACNLWA_SOUNDOBJHOLD_H

#include "acnlwa/SoundObj.h"

class SoundObjHold : public ::SoundObj<1> {
public:
    virtual ~SoundObjHold();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDOBJHOLD_H
