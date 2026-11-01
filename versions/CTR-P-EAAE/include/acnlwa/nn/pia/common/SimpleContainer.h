#ifndef ACNLWA_NN_PIA_COMMON_SIMPLECONTAINER_H
#define ACNLWA_NN_PIA_COMMON_SIMPLECONTAINER_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace common {

template <typename T0, int T1>
class SimpleContainer : public ::nn::pia::common::RootObject {
public:
    virtual ~SimpleContainer();
    virtual void VF02();
};

template <typename T0, int T1>
SimpleContainer<T0, T1>::~SimpleContainer() {}

template <typename T0, int T1>
void SimpleContainer<T0, T1>::VF02() {}


}  // namespace common
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_COMMON_SIMPLECONTAINER_H
