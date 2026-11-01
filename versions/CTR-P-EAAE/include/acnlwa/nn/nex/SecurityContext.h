#ifndef ACNLWA_NN_NEX_SECURITYCONTEXT_H
#define ACNLWA_NN_NEX_SECURITYCONTEXT_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class SecurityContext : public ::nn::nex::RootObject {
public:
    virtual ~SecurityContext();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SECURITYCONTEXT_H
