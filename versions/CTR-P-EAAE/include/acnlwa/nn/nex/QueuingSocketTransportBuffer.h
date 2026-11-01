#ifndef ACNLWA_NN_NEX_QUEUINGSOCKETTRANSPORTBUFFER_H
#define ACNLWA_NN_NEX_QUEUINGSOCKETTRANSPORTBUFFER_H

#include "acnlwa/nn/nex/QueuingSocket.h"

namespace nn {
namespace nex {

class QueuingSocketTransportBuffer : public ::nn::nex::QueuingSocket {
public:
    virtual ~QueuingSocketTransportBuffer();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_QUEUINGSOCKETTRANSPORTBUFFER_H
