#ifndef ACNLWA_NN_PIA_COMMON_FIXEDOBJLIST_H
#define ACNLWA_NN_PIA_COMMON_FIXEDOBJLIST_H

#include "acnlwa/nn/pia/common/ObjList.h"

namespace nn {
namespace pia {
namespace common {

template <typename T0, unsigned int T1>
class FixedObjList : public ::nn::pia::common::ObjList<T0> {
public:
};
}  // namespace common
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_COMMON_FIXEDOBJLIST_H
