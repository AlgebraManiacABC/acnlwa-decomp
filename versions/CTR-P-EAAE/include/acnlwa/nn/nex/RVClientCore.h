#ifndef ACNLWA_NN_NEX_RVCLIENTCORE_H
#define ACNLWA_NN_NEX_RVCLIENTCORE_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class RVClientCore : public ::nn::nex::RefCountedObject {
public:
    virtual ~RVClientCore();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_RVCLIENTCORE_H
