#ifndef ACNLWA_NN_NEX_NATTRAVERSALRELAYCLIENT_H
#define ACNLWA_NN_NEX_NATTRAVERSALRELAYCLIENT_H

#include "acnlwa/nn/nex/ServiceClient.h"

namespace nn {
namespace nex {

class NATTraversalRelayClient : public ::nn::nex::ServiceClient {
public:
    virtual ~NATTraversalRelayClient();
    virtual void VF05();
    virtual void VF07();
    virtual void VF08();
    virtual void VF10();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NATTRAVERSALRELAYCLIENT_H
