#ifndef ACNLWA_NN_OS_THREADPOOL_H
#define ACNLWA_NN_OS_THREADPOOL_H

#include "acnlwa/nn/os/IWaitTaskInvoker.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace nn {
namespace os {

class ThreadPool : public ::nn::os::IWaitTaskInvoker, private ::nn::util::ADLFireWall::NonCopyable< ::nn::os::ThreadPool> {
public:
    virtual void VF00();
    virtual ~ThreadPool();
    virtual void VF03();
};

}  // namespace os
}  // namespace nn

#endif  // ACNLWA_NN_OS_THREADPOOL_H
