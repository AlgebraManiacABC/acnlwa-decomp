#ifndef ACNLWA_PEAD_EVENT_H
#define ACNLWA_PEAD_EVENT_H

#include "acnlwa/pead/IDisposer.h"

namespace pead {

class Event : public ::pead::IDisposer {
public:
    virtual ~Event();
};

}  // namespace pead

#endif  // ACNLWA_PEAD_EVENT_H
