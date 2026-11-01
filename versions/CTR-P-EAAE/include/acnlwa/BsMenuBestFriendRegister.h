#ifndef ACNLWA_BSMENUBESTFRIENDREGISTER_H
#define ACNLWA_BSMENUBESTFRIENDREGISTER_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuBestFriendRegister : public ::MenuBase, public ::state::Mode< ::BsMenuBestFriendRegister> {
public:
    virtual ~BsMenuBestFriendRegister();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUBESTFRIENDREGISTER_H
