#ifndef ACNLWA_EVENT_EVENTANNIVERSARY_H
#define ACNLWA_EVENT_EVENTANNIVERSARY_H

#include "acnlwa/event/EventBase.h"

namespace event {

class EventAnniversary : public ::event::EventBase {
public:
    virtual void VF00();
    virtual void VF01();
};

}  // namespace event

#endif  // ACNLWA_EVENT_EVENTANNIVERSARY_H
