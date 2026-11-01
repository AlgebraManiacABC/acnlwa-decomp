#ifndef ACNLWA_NN_NEX_CALLPROTOCOLMETHODOPERATION_H
#define ACNLWA_NN_NEX_CALLPROTOCOLMETHODOPERATION_H

#include "acnlwa/nn/nex/Operation.h"

namespace nn {
namespace nex {

class CallProtocolMethodOperation : public ::nn::nex::Operation {
public:
    virtual ~CallProtocolMethodOperation();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CALLPROTOCOLMETHODOPERATION_H
