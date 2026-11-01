#ifndef ACNLWA_QRDECODE_CAMERA_THREAD_H
#define ACNLWA_QRDECODE_CAMERA_THREAD_H

#include "acnlwa/sead/Thread.h"

namespace qrdecode {
namespace Camera {

class Thread : public ::sead::Thread {
public:
    virtual ~Thread();
    virtual void VF16();
};

}  // namespace Camera
}  // namespace qrdecode

#endif  // ACNLWA_QRDECODE_CAMERA_THREAD_H
