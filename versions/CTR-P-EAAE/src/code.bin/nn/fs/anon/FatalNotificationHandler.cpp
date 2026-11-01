#include "acnlwa/nn/srv/NotificationHandler.h"

namespace nn {
namespace fs {
namespace {

class FatalNotificationHandler : public ::nn::srv::NotificationHandler {
public:
    virtual void VF00();
};

void FatalNotificationHandler::VF00() {}

}  // namespace
}  // namespace fs
}  // namespace nn
