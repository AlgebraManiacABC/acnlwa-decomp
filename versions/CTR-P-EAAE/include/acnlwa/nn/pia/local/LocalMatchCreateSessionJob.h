#ifndef ACNLWA_NN_PIA_LOCAL_LOCALMATCHCREATESESSIONJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALMATCHCREATESESSIONJOB_H

#include "acnlwa/nn/pia/session/CreateSessionJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalMatchCreateSessionJob : public ::nn::pia::session::CreateSessionJob {
public:
    virtual ~LocalMatchCreateSessionJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALMATCHCREATESESSIONJOB_H
