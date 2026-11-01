#ifndef ACNLWA_PEAD_MAINTHREAD_H
#define ACNLWA_PEAD_MAINTHREAD_H

#include "acnlwa/pead/Thread.h"

namespace pead {

class MainThread : public ::pead::Thread {
public:
    virtual ~MainThread();
    virtual void VF02();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF10();
    virtual void VF15();
};

}  // namespace pead

#endif  // ACNLWA_PEAD_MAINTHREAD_H
