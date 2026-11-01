#ifndef ACNLWA_AUDIOOBJFALL_H
#define ACNLWA_AUDIOOBJFALL_H

#include "acnlwa/AudioObjFgBase.h"

class AudioObjFall : public ::AudioObjFgBase {
public:
    virtual ~AudioObjFall();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

#endif  // ACNLWA_AUDIOOBJFALL_H
