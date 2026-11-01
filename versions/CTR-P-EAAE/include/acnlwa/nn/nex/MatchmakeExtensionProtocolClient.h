#ifndef ACNLWA_NN_NEX_MATCHMAKEEXTENSIONPROTOCOLCLIENT_H
#define ACNLWA_NN_NEX_MATCHMAKEEXTENSIONPROTOCOLCLIENT_H

#include "acnlwa/nn/nex/ClientProtocol.h"

namespace nn {
namespace nex {

class MatchmakeExtensionProtocolClient : public ::nn::nex::ClientProtocol {
public:
    virtual ~MatchmakeExtensionProtocolClient();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MATCHMAKEEXTENSIONPROTOCOLCLIENT_H
