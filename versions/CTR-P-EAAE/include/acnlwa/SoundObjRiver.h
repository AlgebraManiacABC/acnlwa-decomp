#ifndef ACNLWA_SOUNDOBJRIVER_H
#define ACNLWA_SOUNDOBJRIVER_H

#include "acnlwa/SoundObjBase.h"

class SoundObjRiver : public ::SoundObjBase {
public:
    virtual ~SoundObjRiver();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

#endif  // ACNLWA_SOUNDOBJRIVER_H
