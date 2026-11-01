#ifndef ACNLWA_BSMENUROOMMGR_H
#define ACNLWA_BSMENUROOMMGR_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsMenuRoomMgr : public ::Base, public ::state::Mode< ::BsMenuRoomMgr> {
public:
    virtual ~BsMenuRoomMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUROOMMGR_H
