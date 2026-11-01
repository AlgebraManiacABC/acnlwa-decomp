#ifndef ACNLWA_NN_PIA_INET_NATPROBEREQUESTLIST_H
#define ACNLWA_NN_PIA_INET_NATPROBEREQUESTLIST_H

#include "acnlwa/nn/pia/common/ObjList.h"
#include "acnlwa/nn/pia/inet/NatProbeRequest.h"

namespace nn {
namespace pia {
namespace inet {

class NatProbeRequestList : public ::nn::pia::common::ObjList< ::nn::pia::inet::NatProbeRequest> {
public:
    virtual ~NatProbeRequestList();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NATPROBEREQUESTLIST_H
