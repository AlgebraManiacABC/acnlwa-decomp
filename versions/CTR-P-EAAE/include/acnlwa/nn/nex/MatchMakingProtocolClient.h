#ifndef ACNLWA_NN_NEX_MATCHMAKINGPROTOCOLCLIENT_H
#define ACNLWA_NN_NEX_MATCHMAKINGPROTOCOLCLIENT_H

#include "acnlwa/nn/nex/ClientProtocol.h"

namespace nn {
namespace nex {

class MatchMakingProtocolClient : public ::nn::nex::ClientProtocol {
public:
    virtual ~MatchMakingProtocolClient();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MATCHMAKINGPROTOCOLCLIENT_H
