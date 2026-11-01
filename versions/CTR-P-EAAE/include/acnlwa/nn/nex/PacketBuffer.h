#ifndef ACNLWA_NN_NEX_PACKETBUFFER_H
#define ACNLWA_NN_NEX_PACKETBUFFER_H

#include "acnlwa/nn/nex/Buffer.h"

namespace nn {
namespace nex {

class PacketBuffer : public ::nn::nex::Buffer {
public:
    virtual ~PacketBuffer();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PACKETBUFFER_H
