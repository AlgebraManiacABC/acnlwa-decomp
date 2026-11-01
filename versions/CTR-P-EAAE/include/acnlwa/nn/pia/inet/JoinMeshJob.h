#ifndef ACNLWA_NN_PIA_INET_JOINMESHJOB_H
#define ACNLWA_NN_PIA_INET_JOINMESHJOB_H

#include "acnlwa/nn/pia/session/JoinMeshJob.h"

namespace nn {
namespace pia {
namespace inet {

class JoinMeshJob : public ::nn::pia::session::JoinMeshJob {
public:
    virtual ~JoinMeshJob();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_JOINMESHJOB_H
