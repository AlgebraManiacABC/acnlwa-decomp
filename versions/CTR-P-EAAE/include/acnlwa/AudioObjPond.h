#ifndef ACNLWA_AUDIOOBJPOND_H
#define ACNLWA_AUDIOOBJPOND_H

#include "acnlwa/AudioObjFgBase.h"

class AudioObjPond : public ::AudioObjFgBase {
public:
    virtual ~AudioObjPond();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

#endif  // ACNLWA_AUDIOOBJPOND_H
