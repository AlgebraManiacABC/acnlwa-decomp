#ifndef ACNLWA_NN_NEX_BUFFER_H
#define ACNLWA_NN_NEX_BUFFER_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class Buffer : public ::nn::nex::RefCountedObject {
public:
    virtual ~Buffer();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_BUFFER_H
