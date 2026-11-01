#ifndef ACNLWA_BGCHECK_MOVEBG_H
#define ACNLWA_BGCHECK_MOVEBG_H

#include "acnlwa/collision/World/Body.h"

namespace bgcheck {

class MoveBg : public ::collision::World::Body {
public:
    virtual ~MoveBg();
    virtual void MoveBg_VF02();
    virtual void MoveBg_VF03();
};

}  // namespace bgcheck

#endif  // ACNLWA_BGCHECK_MOVEBG_H
