#ifndef ACNLWA_BLACKWAIT_H
#define ACNLWA_BLACKWAIT_H

#include "acnlwa/state/Mode.h"
#include "acnlwa/sead/IDisposer.h"

class BlackWait : public ::state::Mode< ::BlackWait> {
public:
    class SingletonDisposer_ : public ::sead::IDisposer {
    public:
        virtual ~SingletonDisposer_();
    };

    virtual ~BlackWait();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_BLACKWAIT_H
