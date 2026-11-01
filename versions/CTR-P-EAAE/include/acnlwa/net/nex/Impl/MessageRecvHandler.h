#ifndef ACNLWA_NET_NEX_IMPL_MESSAGERECVHANDLER_H
#define ACNLWA_NET_NEX_IMPL_MESSAGERECVHANDLER_H

#include "acnlwa/nn/nex/MessagingNotificationHandler.h"

namespace net {
namespace nex {
namespace Impl {

class MessageRecvHandler : public ::nn::nex::MessagingNotificationHandler {
public:
    virtual ~MessageRecvHandler();
    virtual void VF02();
};

}  // namespace Impl
}  // namespace nex
}  // namespace net

#endif  // ACNLWA_NET_NEX_IMPL_MESSAGERECVHANDLER_H
