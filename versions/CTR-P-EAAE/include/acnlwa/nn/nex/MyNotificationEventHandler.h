#ifndef ACNLWA_NN_NEX_MYNOTIFICATIONEVENTHANDLER_H
#define ACNLWA_NN_NEX_MYNOTIFICATIONEVENTHANDLER_H

#include "acnlwa/nn/nex/NotificationEventHandler.h"
#include "acnlwa/nn/nex/NotificationEventFilterInterface.h"

namespace nn {
namespace nex {

class MyNotificationEventHandler : public ::nn::nex::NotificationEventHandler, public ::nn::nex::NotificationEventFilterInterface {
public:
    virtual ~MyNotificationEventHandler();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MYNOTIFICATIONEVENTHANDLER_H
