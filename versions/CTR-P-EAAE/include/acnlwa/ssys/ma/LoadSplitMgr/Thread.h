#ifndef ACNLWA_SSYS_MA_LOADSPLITMGR_THREAD_H
#define ACNLWA_SSYS_MA_LOADSPLITMGR_THREAD_H

#include "acnlwa/sead/Thread.h"

namespace ssys {
namespace ma {
namespace LoadSplitMgr {

class Thread : public ::sead::Thread {
public:
    virtual ~Thread();
    virtual void VF16();
};

}  // namespace LoadSplitMgr
}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_LOADSPLITMGR_THREAD_H
