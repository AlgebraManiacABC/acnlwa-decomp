#ifndef ACNLWA_BSMENUBESTFRIENDLIST_H
#define ACNLWA_BSMENUBESTFRIENDLIST_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuBestFriendList : public ::MenuBase, public ::state::Mode< ::BsMenuBestFriendList> {
public:
    virtual ~BsMenuBestFriendList();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUBESTFRIENDLIST_H
