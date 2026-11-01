#ifndef ACNLWA_NN_PIA_LOCAL_LOCALMATCHBROWSEMATCHMAKEJOB_H
#define ACNLWA_NN_PIA_LOCAL_LOCALMATCHBROWSEMATCHMAKEJOB_H

#include "acnlwa/nn/pia/session/BrowseMatchmakeJob.h"

namespace nn {
namespace pia {
namespace local {

class LocalMatchBrowseMatchmakeJob : public ::nn::pia::session::BrowseMatchmakeJob {
public:
    virtual ~LocalMatchBrowseMatchmakeJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALMATCHBROWSEMATCHMAKEJOB_H
