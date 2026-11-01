#ifndef ACNLWA_NN_NEX_STLEXTDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_STLEXTDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class STLExtDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~STLExtDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_STLEXTDDLDECLARATIONS_H
