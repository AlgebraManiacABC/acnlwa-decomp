#ifndef ACNLWA_NN_PIA_INET_NATPROBELIST_H
#define ACNLWA_NN_PIA_INET_NATPROBELIST_H

#include "acnlwa/nn/pia/common/ObjList.h"
#include "acnlwa/nn/pia/inet/NatProbe.h"

namespace nn {
namespace pia {
namespace inet {

class NatProbeList : public ::nn::pia::common::ObjList< ::nn::pia::inet::NatProbe> {
public:
    virtual ~NatProbeList();
    virtual void VF02();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NATPROBELIST_H
