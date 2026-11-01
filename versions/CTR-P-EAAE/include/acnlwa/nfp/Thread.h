#ifndef ACNLWA_NFP_THREAD_H
#define ACNLWA_NFP_THREAD_H

#include "acnlwa/sead/Thread.h"

namespace nfp {

class Thread : public ::sead::Thread {
public:
    virtual ~Thread();
    virtual void VF16();
};

}  // namespace nfp

#endif  // ACNLWA_NFP_THREAD_H
