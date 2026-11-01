#ifndef ACNLWA_NN_PIA_LOCAL_UDSCREATESESSIONSETTING_H
#define ACNLWA_NN_PIA_LOCAL_UDSCREATESESSIONSETTING_H

#include "acnlwa/nn/pia/local/LocalCreateSessionSetting.h"

namespace nn {
namespace pia {
namespace local {

class UdsCreateSessionSetting : public ::nn::pia::local::LocalCreateSessionSetting {
public:
    virtual ~UdsCreateSessionSetting();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSCREATESESSIONSETTING_H
