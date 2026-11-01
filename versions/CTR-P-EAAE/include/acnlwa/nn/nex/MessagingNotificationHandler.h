#ifndef ACNLWA_NN_NEX_MESSAGINGNOTIFICATIONHANDLER_H
#define ACNLWA_NN_NEX_MESSAGINGNOTIFICATIONHANDLER_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class MessagingNotificationHandler : public ::nn::nex::RootObject {
public:
    virtual ~MessagingNotificationHandler();
    virtual void VF02() = 0;
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MESSAGINGNOTIFICATIONHANDLER_H
