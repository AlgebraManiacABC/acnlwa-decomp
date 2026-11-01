#ifndef ACNLWA_NN_NEX_STEPSEQUENCEJOB_H
#define ACNLWA_NN_NEX_STEPSEQUENCEJOB_H

#include "acnlwa/nn/nex/Job.h"
#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class StepSequenceJob : public ::nn::nex::Job {
public:
    class Step : public ::nn::nex::RootObject {
    public:
        virtual ~Step();
    };

    virtual ~StepSequenceJob();
    virtual void VF03();
    virtual void VF05();
    virtual void VF06();
    virtual void VF12();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_STEPSEQUENCEJOB_H
