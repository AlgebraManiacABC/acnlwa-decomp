#ifndef ACNLWA_BALLOONSTRING_H
#define ACNLWA_BALLOONSTRING_H

#include "acnlwa/BsGrRenderer.h"

class BalloonString : public ::BsGrRenderer::Functor {
public:
    virtual ~BalloonString();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

#endif  // ACNLWA_BALLOONSTRING_H
