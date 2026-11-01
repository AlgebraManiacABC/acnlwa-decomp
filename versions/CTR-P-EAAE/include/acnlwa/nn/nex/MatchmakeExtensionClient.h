#ifndef ACNLWA_NN_NEX_MATCHMAKEEXTENSIONCLIENT_H
#define ACNLWA_NN_NEX_MATCHMAKEEXTENSIONCLIENT_H

#include "acnlwa/nn/nex/MatchMakingClient.h"

namespace nn {
namespace nex {

class MatchmakeExtensionClient : public ::nn::nex::MatchMakingClient {
public:
    virtual ~MatchmakeExtensionClient();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MATCHMAKEEXTENSIONCLIENT_H
