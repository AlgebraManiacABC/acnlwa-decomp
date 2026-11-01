#ifndef ACNLWA_ACNPCDEMODOLLPLAYER_H
#define ACNLWA_ACNPCDEMODOLLPLAYER_H

#include "acnlwa/AcNpcDemoDollBase.h"

class AcNpcDemoDollPlayer : public ::AcNpcDemoDollBase {
public:
    virtual ~AcNpcDemoDollPlayer();
    virtual void UtlBase_VF32();
    virtual bool VF89();
    virtual void VF90();
};

#endif  // ACNLWA_ACNPCDEMODOLLPLAYER_H
