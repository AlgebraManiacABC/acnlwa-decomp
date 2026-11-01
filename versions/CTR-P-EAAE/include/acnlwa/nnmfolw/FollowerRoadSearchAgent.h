#ifndef ACNLWA_NNMFOLW_FOLLOWERROADSEARCHAGENT_H
#define ACNLWA_NNMFOLW_FOLLOWERROADSEARCHAGENT_H

#include "acnlwa/RoadSearchDefaultAgent.h"

namespace nnmfolw {

class FollowerRoadSearchAgent : public ::RoadSearchDefaultAgent {
public:
    virtual void VF00();
    virtual void VF01();
};

}  // namespace nnmfolw

#endif  // ACNLWA_NNMFOLW_FOLLOWERROADSEARCHAGENT_H
