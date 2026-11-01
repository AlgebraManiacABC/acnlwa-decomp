#ifndef ACNLWA_NN_PIA_INET_NEXJOINTSESSIONJOB_H
#define ACNLWA_NN_PIA_INET_NEXJOINTSESSIONJOB_H

#include "acnlwa/nn/pia/session/JointSessionJob.h"

namespace nn {
namespace pia {
namespace inet {

class NexJointSessionJob : public ::nn::pia::session::JointSessionJob {
public:
    virtual ~NexJointSessionJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_NEXJOINTSESSIONJOB_H
