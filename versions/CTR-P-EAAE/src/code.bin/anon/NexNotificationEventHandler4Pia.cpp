#include "acnlwa/nn/nex/NotificationEventHandler.h"

namespace {

class NexNotificationEventHandler4Pia : public ::nn::nex::NotificationEventHandler {
public:
    virtual ~NexNotificationEventHandler4Pia();
    virtual void VF02();
};

NexNotificationEventHandler4Pia::~NexNotificationEventHandler4Pia() {}

void NexNotificationEventHandler4Pia::VF02() {}

}  // namespace
