#ifndef ACNLWA_BSMENUBESTFRIENDLISTMGR_H
#define ACNLWA_BSMENUBESTFRIENDLISTMGR_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuBestFriendListMgr : public ::MenuBase, public ::state::Mode< ::BsMenuBestFriendListMgr> {
public:
    virtual ~BsMenuBestFriendListMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUBESTFRIENDLISTMGR_H
