#ifndef ACNLWA_NN_PIA_TRANSPORT_TRANSPORT_H
#define ACNLWA_NN_PIA_TRANSPORT_TRANSPORT_H

#include "acnlwa/nn/pia/common/RootObject.h"
#include "acnlwa/nn/pia/common/Job.h"

namespace nn {
namespace pia {
namespace transport {

class Transport : public ::nn::pia::common::RootObject {
public:
    class DispatchJob : public ::nn::pia::common::Job {
    public:
        virtual ~DispatchJob();
        virtual void VF03();
    };

    virtual void VF00();
};

}  // namespace transport
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_TRANSPORT_TRANSPORT_H
