#ifndef ACNLWA_STATE_MODE_H
#define ACNLWA_STATE_MODE_H

#include "acnlwa/state/Base.h"

namespace state {

template <typename T0>
class Mode : public ::state::Base<T0> {
public:
    virtual ~Mode();
    virtual void Mode_VF02();
};

template <typename T0>
Mode<T0>::~Mode() {}

template <typename T0>
void Mode<T0>::Mode_VF02() {}


}  // namespace state

#endif  // ACNLWA_STATE_MODE_H
