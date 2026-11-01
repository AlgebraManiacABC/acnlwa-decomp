#ifndef ACNLWA_NN_PIA_TRANSPORT_RELIABLESLIDINGWINDOW_H
#define ACNLWA_NN_PIA_TRANSPORT_RELIABLESLIDINGWINDOW_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace transport {

class ReliableSlidingWindow : public ::nn::pia::common::RootObject {
public:
    virtual ~ReliableSlidingWindow();
    virtual void VF02();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_RELIABLESLIDINGWINDOW_H
