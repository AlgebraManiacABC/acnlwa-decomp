#ifndef ACNLWA_SEAD_MAINTHREAD_H
#define ACNLWA_SEAD_MAINTHREAD_H

#include "acnlwa/sead/Thread.h"

namespace sead {

class MainThread : public ::sead::Thread {
public:
    virtual ~MainThread();
    virtual void VF02();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF11();
    virtual void VF16();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_MAINTHREAD_H
