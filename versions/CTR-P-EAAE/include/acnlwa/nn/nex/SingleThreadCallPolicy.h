#ifndef ACNLWA_NN_NEX_SINGLETHREADCALLPOLICY_H
#define ACNLWA_NN_NEX_SINGLETHREADCALLPOLICY_H

#include "acnlwa/nn/nex/CallPolicy.h"

namespace nn {
namespace nex {

class SingleThreadCallPolicy : public ::nn::nex::CallPolicy {
public:
    virtual ~SingleThreadCallPolicy();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SINGLETHREADCALLPOLICY_H
