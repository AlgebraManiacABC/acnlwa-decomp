#ifndef ACNLWA_EVENT_EVENTMONTHLYWEEKDAY_H
#define ACNLWA_EVENT_EVENTMONTHLYWEEKDAY_H

#include "acnlwa/event/EventBase.h"

namespace event {

class EventMonthlyWeekday : public ::event::EventBase {
public:
    virtual ~EventMonthlyWeekday();
    virtual void VF02();
};

}  // namespace event

#endif  // ACNLWA_EVENT_EVENTMONTHLYWEEKDAY_H
