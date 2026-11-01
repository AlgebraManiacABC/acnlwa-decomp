#ifndef ACNLWA_BSMENUPASSPORTFORFRIEND_H
#define ACNLWA_BSMENUPASSPORTFORFRIEND_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuPassportForFriend : public ::MenuBase, public ::state::Mode< ::BsMenuPassportForFriend> {
public:
    virtual ~BsMenuPassportForFriend();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUPASSPORTFORFRIEND_H
