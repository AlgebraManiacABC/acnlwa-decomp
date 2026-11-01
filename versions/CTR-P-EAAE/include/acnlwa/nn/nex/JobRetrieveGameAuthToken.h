#ifndef ACNLWA_NN_NEX_JOBRETRIEVEGAMEAUTHTOKEN_H
#define ACNLWA_NN_NEX_JOBRETRIEVEGAMEAUTHTOKEN_H

#include "acnlwa/nn/nex/StepSequenceJob.h"
#include "acnlwa/nn/nex/NonCopyable.h"

namespace nn {
namespace nex {

class JobRetrieveGameAuthToken : public ::nn::nex::StepSequenceJob, public ::nn::nex::NonCopyable {
public:
    virtual ~JobRetrieveGameAuthToken();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBRETRIEVEGAMEAUTHTOKEN_H
