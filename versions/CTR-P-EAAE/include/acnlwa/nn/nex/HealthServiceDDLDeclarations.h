#ifndef ACNLWA_NN_NEX_HEALTHSERVICEDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_HEALTHSERVICEDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class HealthServiceDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~HealthServiceDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_HEALTHSERVICEDDLDECLARATIONS_H
