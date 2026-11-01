#ifndef ACNLWA_SEAD_DELEGATETHREAD_H
#define ACNLWA_SEAD_DELEGATETHREAD_H

#include "acnlwa/sead/Thread.h"

namespace sead {

class DelegateThread : public ::sead::Thread {
public:
    virtual ~DelegateThread();
    virtual void VF16();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_DELEGATETHREAD_H
