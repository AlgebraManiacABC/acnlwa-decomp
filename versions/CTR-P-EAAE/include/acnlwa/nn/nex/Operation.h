#ifndef ACNLWA_NN_NEX_OPERATION_H
#define ACNLWA_NN_NEX_OPERATION_H

#include "acnlwa/nn/nex/StateMachine/QEvent.h"

namespace nn {
namespace nex {

class Operation : public ::nn::nex::StateMachine::QEvent {
public:
    virtual ~Operation();
    virtual void VF02();
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_OPERATION_H
