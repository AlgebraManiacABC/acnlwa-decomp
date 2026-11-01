#ifndef ACNLWA_NN_NEX_UTILITYPROTOCOLCLIENT_H
#define ACNLWA_NN_NEX_UTILITYPROTOCOLCLIENT_H

#include "acnlwa/nn/nex/ClientProtocol.h"

namespace nn {
namespace nex {

class UtilityProtocolClient : public ::nn::nex::ClientProtocol {
public:
    virtual ~UtilityProtocolClient();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_UTILITYPROTOCOLCLIENT_H
