#ifndef ACNLWA_NN_NEX_DDLDECLARATIONS_H
#define ACNLWA_NN_NEX_DDLDECLARATIONS_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class DDLDeclarations : public ::nn::nex::RootObject {
public:
    virtual ~DDLDeclarations();
    virtual void VF02() = 0;
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_DDLDECLARATIONS_H
