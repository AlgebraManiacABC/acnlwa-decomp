#ifndef ACNLWA_NN_NEX_JOBCTRLOGIN_H
#define ACNLWA_NN_NEX_JOBCTRLOGIN_H

#include "acnlwa/nn/nex/JobLogin.h"

namespace nn {
namespace nex {

class JobCTRLogin : public ::nn::nex::JobLogin {
public:
    virtual ~JobCTRLogin();
    virtual void VF13();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBCTRLOGIN_H
