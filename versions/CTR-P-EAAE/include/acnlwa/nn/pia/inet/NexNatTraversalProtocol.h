#ifndef ACNLWA_NN_PIA_INET_NEXNATTRAVERSALPROTOCOL_H
#define ACNLWA_NN_PIA_INET_NEXNATTRAVERSALPROTOCOL_H

#include "acnlwa/nn/pia/transport/Protocol.h"

namespace nn {
namespace pia {
namespace inet {

class NexNatTraversalProtocol : public ::nn::pia::transport::Protocol {
public:
    virtual ~NexNatTraversalProtocol();
    virtual void VF02();
    virtual void VF03();
    virtual void VF06();
    virtual void VF08();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXNATTRAVERSALPROTOCOL_H
