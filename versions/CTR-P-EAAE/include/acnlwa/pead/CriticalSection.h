#ifndef ACNLWA_PEAD_CRITICALSECTION_H
#define ACNLWA_PEAD_CRITICALSECTION_H

#include "acnlwa/pead/IDisposer.h"

namespace pead {

class CriticalSection : public ::pead::IDisposer {
public:
    virtual ~CriticalSection();
};

}  // namespace pead

#endif  // ACNLWA_PEAD_CRITICALSECTION_H
