#ifndef ACNLWA_NN_PIA_LOCAL_LOCALFACADE_H
#define ACNLWA_NN_PIA_LOCAL_LOCALFACADE_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace local {

class LocalFacade : public ::nn::pia::common::RootObject {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~LocalFacade();
    virtual void VF04();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALFACADE_H
