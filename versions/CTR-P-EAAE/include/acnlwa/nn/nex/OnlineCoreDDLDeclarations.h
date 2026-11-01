#ifndef ACNLWA_NN_NEX_ONLINECOREDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_ONLINECOREDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class OnlineCoreDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~OnlineCoreDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_ONLINECOREDDLDECLARATIONS_H
