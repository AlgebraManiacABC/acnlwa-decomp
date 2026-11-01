#ifndef ACNLWA_NN_NEX_NINTENDOAUTHENTICATIONDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_NINTENDOAUTHENTICATIONDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class NintendoAuthenticationDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~NintendoAuthenticationDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NINTENDOAUTHENTICATIONDDLDECLARATIONS_H
