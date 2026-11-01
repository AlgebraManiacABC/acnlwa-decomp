#ifndef ACNLWA_STATE_STEP_H
#define ACNLWA_STATE_STEP_H

#include "acnlwa/state/Base.h"

namespace state {

template <typename T0, typename T1>
class Step : public ::state::Base<T1> {
public:
    virtual ~Step();
    virtual void VF02();
};

template <typename T0, typename T1>
Step<T0, T1>::~Step() {}

template <typename T0, typename T1>
void Step<T0, T1>::VF02() {}


}  // namespace state

#endif  // ACNLWA_STATE_STEP_H
