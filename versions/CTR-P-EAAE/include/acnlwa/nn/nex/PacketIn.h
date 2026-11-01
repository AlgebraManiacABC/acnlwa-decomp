#ifndef ACNLWA_NN_NEX_PACKETIN_H
#define ACNLWA_NN_NEX_PACKETIN_H

#include "acnlwa/nn/nex/Packet.h"

namespace nn {
namespace nex {

class PacketIn : public ::nn::nex::Packet {
public:
    virtual ~PacketIn();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PACKETIN_H
