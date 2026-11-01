#ifndef ACNLWA_NN_NEX_SCHEDULER_H
#define ACNLWA_NN_NEX_SCHEDULER_H

#include "acnlwa/nn/nex/RootObject.h"
#include "acnlwa/nn/nex/WorkerThreads.h"

namespace nn {
namespace nex {

class Scheduler : public ::nn::nex::RootObject {
public:
    class SchedulerWorkerThread : public ::nn::nex::WorkerThreads {
    public:
        virtual void VF00();
        virtual void VF01();
        virtual void VF02();
        virtual ~SchedulerWorkerThread();
    };

    virtual ~Scheduler();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SCHEDULER_H
