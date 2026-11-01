#ifndef ACNLWA_NN_NEX_ANYGATHERINGADAPTER_H
#define ACNLWA_NN_NEX_ANYGATHERINGADAPTER_H

#include "acnlwa/nn/nex/AnyObjectAdapter.h"
#include "acnlwa/nn/nex/Gathering.h"
#include "acnlwa/nn/nex/String.h"

namespace nn {
namespace nex {

class AnyGatheringAdapter : public ::nn::nex::AnyObjectAdapter< ::nn::nex::Gathering, ::nn::nex::String> {
public:
    virtual ~AnyGatheringAdapter();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_ANYGATHERINGADAPTER_H
