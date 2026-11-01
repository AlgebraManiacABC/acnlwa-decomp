#ifndef ACNLWA_NN_NEX_PROTOCOLFOUNDATIONDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_PROTOCOLFOUNDATIONDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class ProtocolFoundationDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~ProtocolFoundationDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PROTOCOLFOUNDATIONDDLDECLARATIONS_H
