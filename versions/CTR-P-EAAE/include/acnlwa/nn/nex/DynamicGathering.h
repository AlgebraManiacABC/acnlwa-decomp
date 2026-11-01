#ifndef ACNLWA_NN_NEX_DYNAMICGATHERING_H
#define ACNLWA_NN_NEX_DYNAMICGATHERING_H

#include "acnlwa/nn/nex/_DDL_DynamicGathering.h"

namespace nn {
namespace nex {

class DynamicGathering : public ::nn::nex::_DDL_DynamicGathering {
public:
    virtual ~DynamicGathering();
    virtual void VF03();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_DYNAMICGATHERING_H
