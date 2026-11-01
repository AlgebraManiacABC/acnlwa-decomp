#ifndef ACNLWA_NETGAME_CONFIRMMACHINE_H
#define ACNLWA_NETGAME_CONFIRMMACHINE_H

#include "acnlwa/netgame/MachineBitTable.h"

namespace netgame {

class ConfirmMachine : public ::netgame::MachineBitTable {
public:
    virtual ~ConfirmMachine();
};

}  // namespace netgame

#endif  // ACNLWA_NETGAME_CONFIRMMACHINE_H
