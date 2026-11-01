#ifndef ACNLWA_ESC_ESCFOLLOWPARTICLE_H
#define ACNLWA_ESC_ESCFOLLOWPARTICLE_H

#include "acnlwa/esc/EscFollowBase.h"

namespace esc {

class EscFollowParticle : public ::esc::EscFollowBase {
public:
    class FollowParticleData : public ::esc::EscFollowBase::FollowData {
    public:
    };
};

}  // namespace esc

#endif  // ACNLWA_ESC_ESCFOLLOWPARTICLE_H
