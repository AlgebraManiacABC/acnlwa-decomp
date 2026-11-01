#ifndef ACNLWA_SEAD_MUTEX_H
#define ACNLWA_SEAD_MUTEX_H

#include "acnlwa/sead/IDisposer.h"

namespace sead {

class Mutex : public ::sead::IDisposer {
public:
    virtual ~Mutex();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_MUTEX_H
