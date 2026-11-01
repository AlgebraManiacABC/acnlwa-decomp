#ifndef ACNLWA_NN_NEX_JOBPROCESSPROTOCOLEVENT_H
#define ACNLWA_NN_NEX_JOBPROCESSPROTOCOLEVENT_H

#include "acnlwa/nn/nex/Job.h"

namespace nn {
namespace nex {

class JobProcessProtocolEvent : public ::nn::nex::Job {
public:
    virtual ~JobProcessProtocolEvent();
    virtual void VF12();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBPROCESSPROTOCOLEVENT_H
