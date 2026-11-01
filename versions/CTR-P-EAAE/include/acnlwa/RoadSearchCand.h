#ifndef ACNLWA_ROADSEARCHCAND_H
#define ACNLWA_ROADSEARCHCAND_H

#include "acnlwa/RoadSearchCandCore.h"

template <int T0, int T1, typename T2>
class RoadSearchCand {
public:
    class Cand : public ::RoadSearchCandCore {
    public:
        virtual void VF00();
        virtual void VF01();
    };
};

template <int T0, int T1, typename T2>
void RoadSearchCand<T0, T1, T2>::Cand::VF00() {}

template <int T0, int T1, typename T2>
void RoadSearchCand<T0, T1, T2>::Cand::VF01() {}


#endif  // ACNLWA_ROADSEARCHCAND_H
