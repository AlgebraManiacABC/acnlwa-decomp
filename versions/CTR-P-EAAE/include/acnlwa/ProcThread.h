#ifndef ACNLWA_PROCTHREAD_H
#define ACNLWA_PROCTHREAD_H

#include "acnlwa/sead/Thread.h"

class ProcThread : public ::sead::Thread {
public:
    virtual ~ProcThread();
    virtual void VF16();
};

#endif  // ACNLWA_PROCTHREAD_H
