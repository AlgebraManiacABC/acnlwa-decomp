#ifndef ACNLWA_NN_NEX_AUTHENTICATIONFOUNDATIONDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_AUTHENTICATIONFOUNDATIONDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class AuthenticationFoundationDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~AuthenticationFoundationDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_AUTHENTICATIONFOUNDATIONDDLDECLARATIONS_H
