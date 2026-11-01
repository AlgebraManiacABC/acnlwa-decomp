#ifndef ACNLWA_EVENT_EVENTNPCBIRTHDAY_H
#define ACNLWA_EVENT_EVENTNPCBIRTHDAY_H

#include "acnlwa/event/EventBase.h"

namespace event {

class EventNpcBirthday : public ::event::EventBase {
public:
    virtual void VF00();
    virtual void VF01();
};

}  // namespace event

#endif  // ACNLWA_EVENT_EVENTNPCBIRTHDAY_H
