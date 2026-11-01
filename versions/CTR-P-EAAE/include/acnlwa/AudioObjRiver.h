#ifndef ACNLWA_AUDIOOBJRIVER_H
#define ACNLWA_AUDIOOBJRIVER_H

#include "acnlwa/AudioObjFgBase.h"

class AudioObjRiver : public ::AudioObjFgBase {
public:
    virtual ~AudioObjRiver();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

#endif  // ACNLWA_AUDIOOBJRIVER_H
