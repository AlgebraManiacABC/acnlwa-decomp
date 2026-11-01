#ifndef ACNLWA_NN_NEX_UTILITYDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_UTILITYDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class UtilityDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~UtilityDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_UTILITYDDLDECLARATIONS_H
