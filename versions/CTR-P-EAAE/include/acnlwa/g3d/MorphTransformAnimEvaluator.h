#ifndef ACNLWA_G3D_MORPHTRANSFORMANIMEVALUATOR_H
#define ACNLWA_G3D_MORPHTRANSFORMANIMEVALUATOR_H

#include "acnlwa/nw/gfx/TransformAnimEvaluator.h"

namespace g3d {

class MorphTransformAnimEvaluator : public ::nw::gfx::TransformAnimEvaluator {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual ~MorphTransformAnimEvaluator();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_MORPHTRANSFORMANIMEVALUATOR_H
