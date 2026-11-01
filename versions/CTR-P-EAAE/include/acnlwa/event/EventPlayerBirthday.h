#ifndef ACNLWA_EVENT_EVENTPLAYERBIRTHDAY_H
#define ACNLWA_EVENT_EVENTPLAYERBIRTHDAY_H

#include "acnlwa/event/EventBase.h"

namespace event {

class EventPlayerBirthday : public ::event::EventBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
};

}  // namespace event

#endif  // ACNLWA_EVENT_EVENTPLAYERBIRTHDAY_H
