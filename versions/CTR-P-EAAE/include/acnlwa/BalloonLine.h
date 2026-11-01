#ifndef ACNLWA_BALLOONLINE_H
#define ACNLWA_BALLOONLINE_H

#include "acnlwa/BsGrRenderer.h"

class BalloonLine : public ::BsGrRenderer::Functor {
public:
    virtual ~BalloonLine();
    virtual void VF02();
};

#endif  // ACNLWA_BALLOONLINE_H
