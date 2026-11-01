#ifndef ACNLWA_NN_NEX_DATASTOREDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_DATASTOREDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class DataStoreDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~DataStoreDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_DATASTOREDDLDECLARATIONS_H
