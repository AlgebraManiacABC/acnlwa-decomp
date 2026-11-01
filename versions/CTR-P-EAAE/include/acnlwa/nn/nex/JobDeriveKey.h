#ifndef ACNLWA_NN_NEX_JOBDERIVEKEY_H
#define ACNLWA_NN_NEX_JOBDERIVEKEY_H

#include "acnlwa/nn/nex/Job.h"

namespace nn {
namespace nex {

class JobDeriveKey : public ::nn::nex::Job {
public:
    virtual ~JobDeriveKey();
    virtual void VF03();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOBDERIVEKEY_H
