#ifndef ACNLWA_NN_PIA_SESSION_SESSIONPROTOCOL_H
#define ACNLWA_NN_PIA_SESSION_SESSIONPROTOCOL_H

#include "acnlwa/nn/pia/transport/Protocol.h"

namespace nn {
namespace pia {
namespace session {

class SessionProtocol : public ::nn::pia::transport::Protocol {
public:
    virtual ~SessionProtocol();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_SESSIONPROTOCOL_H
