#ifndef ACNLWA_NN_NEX_PROTOCOLCALLCONTEXT_H
#define ACNLWA_NN_NEX_PROTOCOLCALLCONTEXT_H

#include "acnlwa/nn/nex/CallContext.h"

namespace nn {
namespace nex {

class ProtocolCallContext : public ::nn::nex::CallContext {
public:
    virtual ~ProtocolCallContext();
    virtual void VF03();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PROTOCOLCALLCONTEXT_H
