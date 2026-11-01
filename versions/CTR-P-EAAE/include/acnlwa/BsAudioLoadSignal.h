#ifndef ACNLWA_BSAUDIOLOADSIGNAL_H
#define ACNLWA_BSAUDIOLOADSIGNAL_H

#include "acnlwa/Base.h"

class BsAudioLoadSignal : public ::Base {
public:
    virtual ~BsAudioLoadSignal();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
};

#endif  // ACNLWA_BSAUDIOLOADSIGNAL_H
