#ifndef ACNLWA_NN_NEX_CALLCONTEXT_H
#define ACNLWA_NN_NEX_CALLCONTEXT_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class CallContext : public ::nn::nex::RefCountedObject {
public:
    virtual ~CallContext();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CALLCONTEXT_H
