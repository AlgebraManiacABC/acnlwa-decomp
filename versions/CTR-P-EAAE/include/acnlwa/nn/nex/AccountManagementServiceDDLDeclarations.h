#ifndef ACNLWA_NN_NEX_ACCOUNTMANAGEMENTSERVICEDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_ACCOUNTMANAGEMENTSERVICEDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class AccountManagementServiceDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~AccountManagementServiceDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_ACCOUNTMANAGEMENTSERVICEDDLDECLARATIONS_H
