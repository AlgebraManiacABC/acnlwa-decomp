#ifndef ACNLWA_NN_NEX_OBJECTTHREAD_H
#define ACNLWA_NN_NEX_OBJECTTHREAD_H

#include "acnlwa/nn/nex/ObjectThreadRoot.h"

namespace nn {
namespace nex {

template <typename T0, typename T1>
class ObjectThread : public ::nn::nex::ObjectThreadRoot {
public:
    virtual ~ObjectThread();
    virtual void VF02();
};

template <typename T0, typename T1>
ObjectThread<T0, T1>::~ObjectThread() {}

template <typename T0, typename T1>
void ObjectThread<T0, T1>::VF02() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_OBJECTTHREAD_H
