#ifndef ACNLWA_SEAD_CRITICALSECTION_H
#define ACNLWA_SEAD_CRITICALSECTION_H

#include "acnlwa/sead/IDisposer.h"

namespace sead {

class CriticalSection : public ::sead::IDisposer {
public:
    virtual ~CriticalSection();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CRITICALSECTION_H
