#ifndef ACNLWA_WATERCURTAIN_H
#define ACNLWA_WATERCURTAIN_H

#include "acnlwa/BsGrRenderer.h"

class WaterCurtain : public ::BsGrRenderer::Functor {
public:
    virtual ~WaterCurtain();
    virtual void VF02();
};

#endif  // ACNLWA_WATERCURTAIN_H
