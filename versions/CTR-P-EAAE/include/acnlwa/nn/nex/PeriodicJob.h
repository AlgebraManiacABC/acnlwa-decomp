#ifndef ACNLWA_NN_NEX_PERIODICJOB_H
#define ACNLWA_NN_NEX_PERIODICJOB_H

#include "acnlwa/nn/nex/Job.h"

namespace nn {
namespace nex {

class PeriodicJob : public ::nn::nex::Job {
public:
    virtual ~PeriodicJob();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PERIODICJOB_H
