#ifndef ACNLWA_NN_NEX_PACKETBUFFERMANAGER_H
#define ACNLWA_NN_NEX_PACKETBUFFERMANAGER_H

#include "acnlwa/nn/nex/PseudoSingleton.h"

namespace nn {
namespace nex {

class PacketBufferManager : public ::nn::nex::PseudoSingleton {
public:
    virtual ~PacketBufferManager();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PACKETBUFFERMANAGER_H
