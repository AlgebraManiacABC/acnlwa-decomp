#ifndef ACNLWA_NN_PIA_INET_NEXSESSIONSEARCHCRITERIA_H
#define ACNLWA_NN_PIA_INET_NEXSESSIONSEARCHCRITERIA_H

#include "acnlwa/nn/pia/session/SessionSearchCriteria.h"

namespace nn {
namespace pia {
namespace inet {

class NexSessionSearchCriteria : public ::nn::pia::session::SessionSearchCriteria {
public:
    virtual ~NexSessionSearchCriteria();
    virtual void VF02();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXSESSIONSEARCHCRITERIA_H
