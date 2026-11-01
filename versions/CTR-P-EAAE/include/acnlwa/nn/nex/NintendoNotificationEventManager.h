#ifndef ACNLWA_NN_NEX_NINTENDONOTIFICATIONEVENTMANAGER_H
#define ACNLWA_NN_NEX_NINTENDONOTIFICATIONEVENTMANAGER_H

#include "acnlwa/nn/nex/_Proto_NintendoNotificationEventProtocolServer.h"

namespace nn {
namespace nex {

class NintendoNotificationEventManager : public ::nn::nex::_Proto_NintendoNotificationEventProtocolServer {
public:
    virtual ~NintendoNotificationEventManager();
    virtual void VF19();
    virtual void VF20();
    virtual void VF23();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NINTENDONOTIFICATIONEVENTMANAGER_H
