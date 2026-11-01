#ifndef ACNLWA_ESC_ESCFOLLOWSE_H
#define ACNLWA_ESC_ESCFOLLOWSE_H

#include "acnlwa/esc/EscFollowBase.h"

namespace esc {

class EscFollowSe : public ::esc::EscFollowBase {
public:
    class FollowSeData : public ::esc::EscFollowBase::FollowData {
    public:
    };
};

}  // namespace esc

#endif  // ACNLWA_ESC_ESCFOLLOWSE_H
