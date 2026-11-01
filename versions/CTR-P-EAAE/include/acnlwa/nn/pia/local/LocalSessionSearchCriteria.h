#ifndef ACNLWA_NN_PIA_LOCAL_LOCALSESSIONSEARCHCRITERIA_H
#define ACNLWA_NN_PIA_LOCAL_LOCALSESSIONSEARCHCRITERIA_H

#include "acnlwa/nn/pia/session/SessionSearchCriteria.h"

namespace nn {
namespace pia {
namespace local {

class LocalSessionSearchCriteria : public ::nn::pia::session::SessionSearchCriteria {
public:
    virtual ~LocalSessionSearchCriteria();
    virtual void VF02();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALSESSIONSEARCHCRITERIA_H
