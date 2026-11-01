#ifndef ACNLWA_ACNPCBOARDINGDEMODOLLPLAYER_H
#define ACNLWA_ACNPCBOARDINGDEMODOLLPLAYER_H

#include "acnlwa/AcNpcDemoDollBase.h"

class AcNpcBoardingDemoDollPlayer : public ::AcNpcDemoDollBase {
public:
    virtual ~AcNpcBoardingDemoDollPlayer();
    virtual void UtlBase_VF32();
    virtual bool VF89();
    virtual void VF90();
};

#endif  // ACNLWA_ACNPCBOARDINGDEMODOLLPLAYER_H
