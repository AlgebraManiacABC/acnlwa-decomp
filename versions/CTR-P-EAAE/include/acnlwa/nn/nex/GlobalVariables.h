#ifndef ACNLWA_NN_NEX_GLOBALVARIABLES_H
#define ACNLWA_NN_NEX_GLOBALVARIABLES_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class GlobalVariables : public ::nn::nex::RefCountedObject {
public:
    virtual ~GlobalVariables();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_GLOBALVARIABLES_H
