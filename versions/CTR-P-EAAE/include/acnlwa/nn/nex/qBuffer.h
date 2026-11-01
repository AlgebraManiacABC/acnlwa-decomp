#ifndef ACNLWA_NN_NEX_QBUFFER_H
#define ACNLWA_NN_NEX_QBUFFER_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class qBuffer : public ::nn::nex::RefCountedObject {
public:
    virtual ~qBuffer();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_QBUFFER_H
