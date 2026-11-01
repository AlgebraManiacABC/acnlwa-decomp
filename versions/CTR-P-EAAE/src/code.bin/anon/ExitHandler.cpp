#include "acnlwa/nn/srv/NotificationHandler.h"

namespace {

class ExitHandler : public ::nn::srv::NotificationHandler {
public:
    virtual void VF00();
};

void ExitHandler::VF00() {}

}  // namespace
