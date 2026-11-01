#ifndef ACNLWA_SOUNDDATALOADTHREAD_THREAD_H
#define ACNLWA_SOUNDDATALOADTHREAD_THREAD_H

#include "acnlwa/sead/Thread.h"

namespace SoundDataLoadThread {

class Thread : public ::sead::Thread {
public:
    virtual ~Thread();
    virtual void VF16();
};

}  // namespace SoundDataLoadThread

#endif  // ACNLWA_SOUNDDATALOADTHREAD_THREAD_H
