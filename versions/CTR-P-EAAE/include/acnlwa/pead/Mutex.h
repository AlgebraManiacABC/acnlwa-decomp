#ifndef ACNLWA_PEAD_MUTEX_H
#define ACNLWA_PEAD_MUTEX_H

#include "acnlwa/pead/IDisposer.h"

namespace pead {

class Mutex : public ::pead::IDisposer {
public:
    virtual ~Mutex();
};

}  // namespace pead

#endif  // ACNLWA_PEAD_MUTEX_H
