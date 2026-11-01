#ifndef ACNLWA_SEAD_VIEWPORT_H
#define ACNLWA_SEAD_VIEWPORT_H

#include "acnlwa/sead/BoundBox2.h"

namespace sead {

class Viewport : public ::sead::BoundBox2<float> {
public:
    virtual ~Viewport();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_VIEWPORT_H
