#ifndef ACNLWA_EVENT_EVENTEVERYDATE_H
#define ACNLWA_EVENT_EVENTEVERYDATE_H

#include "acnlwa/event/EventBase.h"

namespace event {

class EventEveryDate : public ::event::EventBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
};

}  // namespace event

#endif  // ACNLWA_EVENT_EVENTEVERYDATE_H
