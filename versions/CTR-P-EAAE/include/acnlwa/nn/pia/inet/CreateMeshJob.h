#ifndef ACNLWA_NN_PIA_INET_CREATEMESHJOB_H
#define ACNLWA_NN_PIA_INET_CREATEMESHJOB_H

#include "acnlwa/nn/pia/session/CreateMeshJob.h"

namespace nn {
namespace pia {
namespace inet {

class CreateMeshJob : public ::nn::pia::session::CreateMeshJob {
public:
    virtual ~CreateMeshJob();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_CREATEMESHJOB_H
