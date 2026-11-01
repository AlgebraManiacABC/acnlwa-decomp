#ifndef ACNLWA_SVSTEP_H
#define ACNLWA_SVSTEP_H

#include "acnlwa/state/Step.h"
#include "acnlwa/SvStepInner.h"

template <typename T0, typename T1>
class SvStep : public ::state::Step<T0,T1>, public ::SvStepInner {
public:
    virtual ~SvStep();
};

template <typename T0, typename T1>
SvStep<T0, T1>::~SvStep() {}


#endif  // ACNLWA_SVSTEP_H
