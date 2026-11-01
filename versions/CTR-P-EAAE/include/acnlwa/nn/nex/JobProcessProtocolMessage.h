#ifndef ACNLWA_NN_NEX_JOBPROCESSPROTOCOLMESSAGE_H
#define ACNLWA_NN_NEX_JOBPROCESSPROTOCOLMESSAGE_H

#include "acnlwa/nn/nex/JobProcessProtocolEvent.h"

namespace nn {
namespace nex {

class JobProcessProtocolMessage : public ::nn::nex::JobProcessProtocolEvent {
public:
    virtual ~JobProcessProtocolMessage();
    virtual void VF03();
    virtual void VF12();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBPROCESSPROTOCOLMESSAGE_H
