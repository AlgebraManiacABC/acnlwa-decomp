#ifndef ACNLWA_NN_NEX_ANYDATAADAPTER_H
#define ACNLWA_NN_NEX_ANYDATAADAPTER_H

#include "acnlwa/nn/nex/AnyObjectAdapter.h"
#include "acnlwa/nn/nex/Data.h"
#include "acnlwa/nn/nex/String.h"

namespace nn {
namespace nex {

class AnyDataAdapter : public ::nn::nex::AnyObjectAdapter< ::nn::nex::Data, ::nn::nex::String> {
public:
    virtual ~AnyDataAdapter();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_ANYDATAADAPTER_H
