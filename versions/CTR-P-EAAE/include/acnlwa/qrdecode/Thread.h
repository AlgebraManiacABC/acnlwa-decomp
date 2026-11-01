#ifndef ACNLWA_QRDECODE_THREAD_H
#define ACNLWA_QRDECODE_THREAD_H

#include "acnlwa/sead/Thread.h"

namespace qrdecode {

class Thread : public ::sead::Thread {
public:
    virtual ~Thread();
    virtual void VF16();
};

}  // namespace qrdecode

#endif  // ACNLWA_QRDECODE_THREAD_H
