#ifndef ACNLWA_SOUNDOBJINSECTFISH_H
#define ACNLWA_SOUNDOBJINSECTFISH_H

#include "acnlwa/SoundObj.h"

class SoundObjInsectFish : public ::SoundObj<1> {
public:
    virtual ~SoundObjInsectFish();
    virtual void VF04();
    virtual void VF07();
    virtual void VF09();
};

#endif  // ACNLWA_SOUNDOBJINSECTFISH_H
