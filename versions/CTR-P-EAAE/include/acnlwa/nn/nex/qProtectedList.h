#ifndef ACNLWA_NN_NEX_QPROTECTEDLIST_H
#define ACNLWA_NN_NEX_QPROTECTEDLIST_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

template <typename T0>
class qProtectedList : public ::nn::nex::RootObject {
public:
    virtual ~qProtectedList();
};

template <typename T0>
qProtectedList<T0>::~qProtectedList() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_QPROTECTEDLIST_H
