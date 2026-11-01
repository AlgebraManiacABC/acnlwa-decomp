#ifndef ACNLWA_ROADSEARCHDEFAULTAGENT_H
#define ACNLWA_ROADSEARCHDEFAULTAGENT_H

#include "acnlwa/RoadSearchAgent.h"

class RoadSearchDefaultAgent : public ::RoadSearchAgent {
public:
    virtual void VF00();
    virtual void VF01();
};

#endif  // ACNLWA_ROADSEARCHDEFAULTAGENT_H
