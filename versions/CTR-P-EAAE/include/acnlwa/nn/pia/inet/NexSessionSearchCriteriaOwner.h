#ifndef ACNLWA_NN_PIA_INET_NEXSESSIONSEARCHCRITERIAOWNER_H
#define ACNLWA_NN_PIA_INET_NEXSESSIONSEARCHCRITERIAOWNER_H

#include "acnlwa/nn/pia/session/SessionSearchCriteria.h"

namespace nn {
namespace pia {
namespace inet {

class NexSessionSearchCriteriaOwner : public ::nn::pia::session::SessionSearchCriteria {
public:
    virtual ~NexSessionSearchCriteriaOwner();
    virtual void VF02();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXSESSIONSEARCHCRITERIAOWNER_H
