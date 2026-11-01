#ifndef ACNLWA_BSMENUBORROWTHINGLIST_H
#define ACNLWA_BSMENUBORROWTHINGLIST_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuBorrowThingList : public ::MenuBase, public ::state::Mode< ::BsMenuBorrowThingList> {
public:
    virtual ~BsMenuBorrowThingList();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUBORROWTHINGLIST_H
