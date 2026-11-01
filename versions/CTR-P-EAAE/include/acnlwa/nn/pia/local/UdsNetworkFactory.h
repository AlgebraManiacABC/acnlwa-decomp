#ifndef ACNLWA_NN_PIA_LOCAL_UDSNETWORKFACTORY_H
#define ACNLWA_NN_PIA_LOCAL_UDSNETWORKFACTORY_H

#include "acnlwa/nn/pia/local/LocalNetworkFactory.h"

namespace nn {
namespace pia {
namespace local {

class UdsNetworkFactory : public ::nn::pia::local::LocalNetworkFactory {
public:
    virtual ~UdsNetworkFactory();
    virtual void VF36();
    virtual void VF37();
    virtual void VF42();
    virtual void VF43();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSNETWORKFACTORY_H
