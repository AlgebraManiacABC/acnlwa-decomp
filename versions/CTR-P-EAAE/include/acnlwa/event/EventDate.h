#ifndef ACNLWA_EVENT_EVENTDATE_H
#define ACNLWA_EVENT_EVENTDATE_H

#include "acnlwa/event/EventBase.h"

namespace event {

class EventDate : public ::event::EventBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
};

}  // namespace event

#endif  // ACNLWA_EVENT_EVENTDATE_H
