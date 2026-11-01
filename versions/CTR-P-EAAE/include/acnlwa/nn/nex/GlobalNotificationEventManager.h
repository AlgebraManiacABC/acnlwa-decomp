#ifndef ACNLWA_NN_NEX_GLOBALNOTIFICATIONEVENTMANAGER_H
#define ACNLWA_NN_NEX_GLOBALNOTIFICATIONEVENTMANAGER_H

#include "acnlwa/nn/nex/NotificationEventManager.h"

namespace nn {
namespace nex {

class GlobalNotificationEventManager : public ::nn::nex::NotificationEventManager {
public:
    virtual ~GlobalNotificationEventManager();
    virtual void VF20();
    virtual void VF24();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_GLOBALNOTIFICATIONEVENTMANAGER_H
