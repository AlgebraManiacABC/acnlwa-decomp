#ifndef ACNLWA_NN_SRV_EVENTNOTIFICATIONHANDLERBASE_H
#define ACNLWA_NN_SRV_EVENTNOTIFICATIONHANDLERBASE_H

#include "acnlwa/nn/srv/NotificationHandler.h"

namespace nn {
namespace srv {

template <typename T0>
class EventNotificationHandlerBase : public ::nn::srv::NotificationHandler {
public:
    virtual void VF00();
};

template <typename T0>
void EventNotificationHandlerBase<T0>::VF00() {}


}  // namespace srv
}  // namespace nn

#endif  // ACNLWA_NN_SRV_EVENTNOTIFICATIONHANDLERBASE_H
