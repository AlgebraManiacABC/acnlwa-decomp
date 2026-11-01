#ifndef ACNLWA_NN_SRV_NOTIFICATIONHANDLER_H
#define ACNLWA_NN_SRV_NOTIFICATIONHANDLER_H

#include "acnlwa/nn/fnd/IntrusiveLinkedList.h"

namespace nn {
namespace srv {

class NotificationHandler : public ::nn::fnd::IntrusiveLinkedList< ::nn::srv::NotificationHandler,void>::Item {
public:
};

}  // namespace srv
}  // namespace nn

#endif  // ACNLWA_NN_SRV_NOTIFICATIONHANDLER_H
