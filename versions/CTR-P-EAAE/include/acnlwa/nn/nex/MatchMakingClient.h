#ifndef ACNLWA_NN_NEX_MATCHMAKINGCLIENT_H
#define ACNLWA_NN_NEX_MATCHMAKINGCLIENT_H

#include "acnlwa/nn/nex/ServiceClient.h"

namespace nn {
namespace nex {

class MatchMakingClient : public ::nn::nex::ServiceClient {
public:
    virtual ~MatchMakingClient();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MATCHMAKINGCLIENT_H
