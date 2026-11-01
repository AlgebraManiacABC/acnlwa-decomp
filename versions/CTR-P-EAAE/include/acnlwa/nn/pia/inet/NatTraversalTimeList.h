#ifndef ACNLWA_NN_PIA_INET_NATTRAVERSALTIMELIST_H
#define ACNLWA_NN_PIA_INET_NATTRAVERSALTIMELIST_H

#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/nn/pia/common/FixedObjList.h"

namespace nn {
namespace pia {
namespace inet {

class NatTraversalTimeList : public ::nn::pia::common::FixedObjList< ::nn::pia::inet::NatTraversalTime,12u> {
public:
    virtual ~NatTraversalTimeList();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NATTRAVERSALTIMELIST_H
