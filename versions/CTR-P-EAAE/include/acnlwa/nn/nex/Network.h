#ifndef ACNLWA_NN_NEX_NETWORK_H
#define ACNLWA_NN_NEX_NETWORK_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class Network : public ::nn::nex::RefCountedObject {
public:
    virtual ~Network();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NETWORK_H
