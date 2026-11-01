#ifndef ACNLWA_BSMENUFRIENDCHAT_H
#define ACNLWA_BSMENUFRIENDCHAT_H

#include "acnlwa/MenuBase.h"

class BsMenuFriendChat : public ::MenuBase {
public:
    virtual ~BsMenuFriendChat();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
};

#endif  // ACNLWA_BSMENUFRIENDCHAT_H
