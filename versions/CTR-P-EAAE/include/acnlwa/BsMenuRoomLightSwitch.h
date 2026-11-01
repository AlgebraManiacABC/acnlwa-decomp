#ifndef ACNLWA_BSMENUROOMLIGHTSWITCH_H
#define ACNLWA_BSMENUROOMLIGHTSWITCH_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsMenuRoomLightSwitch : public ::Base, public ::state::Mode< ::BsMenuRoomLightSwitch> {
public:
    virtual ~BsMenuRoomLightSwitch();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUROOMLIGHTSWITCH_H
