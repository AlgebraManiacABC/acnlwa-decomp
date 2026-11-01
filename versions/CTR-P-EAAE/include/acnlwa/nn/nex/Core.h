#ifndef ACNLWA_NN_NEX_CORE_H
#define ACNLWA_NN_NEX_CORE_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class Core : public ::nn::nex::RefCountedObject {
public:
    virtual ~Core();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CORE_H
