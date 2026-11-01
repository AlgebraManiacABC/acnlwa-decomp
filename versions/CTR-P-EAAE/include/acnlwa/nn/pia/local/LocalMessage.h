#ifndef ACNLWA_NN_PIA_LOCAL_LOCALMESSAGE_H
#define ACNLWA_NN_PIA_LOCAL_LOCALMESSAGE_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace local {

class LocalMessage : public ::nn::pia::common::RootObject {
public:
    virtual ~LocalMessage();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALMESSAGE_H
