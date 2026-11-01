#ifndef ACNLWA_NN_NEX_MATCHMAKINGPROTOCOLEXTCLIENT_H
#define ACNLWA_NN_NEX_MATCHMAKINGPROTOCOLEXTCLIENT_H

#include "acnlwa/nn/nex/ClientProtocol.h"

namespace nn {
namespace nex {

class MatchMakingProtocolExtClient : public ::nn::nex::ClientProtocol {
public:
    virtual ~MatchMakingProtocolExtClient();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MATCHMAKINGPROTOCOLEXTCLIENT_H
