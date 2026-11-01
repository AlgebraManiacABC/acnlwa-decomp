#ifndef ACNLWA_NN_NEX_NATTRAVERSALDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_NATTRAVERSALDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class NATTraversalDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~NATTraversalDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NATTRAVERSALDDLDECLARATIONS_H
