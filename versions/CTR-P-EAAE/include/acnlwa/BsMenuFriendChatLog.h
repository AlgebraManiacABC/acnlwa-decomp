#ifndef ACNLWA_BSMENUFRIENDCHATLOG_H
#define ACNLWA_BSMENUFRIENDCHATLOG_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuFriendChatLog : public ::MenuBase, public ::state::Mode< ::BsMenuFriendChatLog> {
public:
    virtual ~BsMenuFriendChatLog();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUFRIENDCHATLOG_H
