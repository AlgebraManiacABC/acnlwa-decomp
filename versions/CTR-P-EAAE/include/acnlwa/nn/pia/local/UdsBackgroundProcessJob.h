#ifndef ACNLWA_NN_PIA_LOCAL_UDSBACKGROUNDPROCESSJOB_H
#define ACNLWA_NN_PIA_LOCAL_UDSBACKGROUNDPROCESSJOB_H

#include "acnlwa/nn/pia/local/LocalBackgroundProcessJob.h"

namespace nn {
namespace pia {
namespace local {

class UdsBackgroundProcessJob : public ::nn::pia::local::LocalBackgroundProcessJob {
public:
    virtual ~UdsBackgroundProcessJob();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSBACKGROUNDPROCESSJOB_H
