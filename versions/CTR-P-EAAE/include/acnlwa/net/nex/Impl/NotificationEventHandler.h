#ifndef ACNLWA_NET_NEX_IMPL_NOTIFICATIONEVENTHANDLER_H
#define ACNLWA_NET_NEX_IMPL_NOTIFICATIONEVENTHANDLER_H

#include "acnlwa/nn/nex/NotificationEventHandler.h"

namespace net {
namespace nex {
namespace Impl {

class NotificationEventHandler : public ::nn::nex::NotificationEventHandler {
public:
    virtual ~NotificationEventHandler();
    virtual void VF02();
};

}  // namespace Impl
}  // namespace nex
}  // namespace net

#endif  // ACNLWA_NET_NEX_IMPL_NOTIFICATIONEVENTHANDLER_H
