#ifndef ACNLWA_NN_NEX_PACKET_H
#define ACNLWA_NN_NEX_PACKET_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class Packet : public ::nn::nex::RefCountedObject {
public:
    virtual ~Packet();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PACKET_H
