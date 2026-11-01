#ifndef ACNLWA_NN_NEX_SECURECONNECTIONSERVICEDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_SECURECONNECTIONSERVICEDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class SecureConnectionServiceDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~SecureConnectionServiceDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SECURECONNECTIONSERVICEDDLDECLARATIONS_H
