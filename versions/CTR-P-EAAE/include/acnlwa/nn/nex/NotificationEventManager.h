#ifndef ACNLWA_NN_NEX_NOTIFICATIONEVENTMANAGER_H
#define ACNLWA_NN_NEX_NOTIFICATIONEVENTMANAGER_H

#include "acnlwa/nn/nex/_Proto_NotificationProtocolServer.h"

namespace nn {
namespace nex {

class NotificationEventManager : public ::nn::nex::_Proto_NotificationProtocolServer {
public:
    virtual ~NotificationEventManager();
    virtual void VF19();
    virtual void VF20();
    virtual void VF23();
    virtual void VF24();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NOTIFICATIONEVENTMANAGER_H
