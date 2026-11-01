#ifndef ACNLWA_MACROROADSEARCH_DEFAULTMICROAGENT_H
#define ACNLWA_MACROROADSEARCH_DEFAULTMICROAGENT_H

#include "acnlwa/RoadSearchAgentHasGoal.h"

namespace MacroRoadSearch {

class DefaultMicroAgent : public ::RoadSearchAgentHasGoal {
public:
    virtual void VF00();
    virtual ~DefaultMicroAgent();
};

}  // namespace MacroRoadSearch

#endif  // ACNLWA_MACROROADSEARCH_DEFAULTMICROAGENT_H
