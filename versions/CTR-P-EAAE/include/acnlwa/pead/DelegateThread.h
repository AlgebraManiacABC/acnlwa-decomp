#ifndef ACNLWA_PEAD_DELEGATETHREAD_H
#define ACNLWA_PEAD_DELEGATETHREAD_H

#include "acnlwa/pead/Thread.h"

namespace pead {

class DelegateThread : public ::pead::Thread {
public:
    virtual ~DelegateThread();
    virtual void VF15();
};

}  // namespace pead

#endif  // ACNLWA_PEAD_DELEGATETHREAD_H
