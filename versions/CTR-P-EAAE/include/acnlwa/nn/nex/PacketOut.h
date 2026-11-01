#ifndef ACNLWA_NN_NEX_PACKETOUT_H
#define ACNLWA_NN_NEX_PACKETOUT_H

#include "acnlwa/nn/nex/Packet.h"

namespace nn {
namespace nex {

class PacketOut : public ::nn::nex::Packet {
public:
    virtual ~PacketOut();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PACKETOUT_H
