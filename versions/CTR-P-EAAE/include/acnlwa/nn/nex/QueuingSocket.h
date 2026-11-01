#ifndef ACNLWA_NN_NEX_QUEUINGSOCKET_H
#define ACNLWA_NN_NEX_QUEUINGSOCKET_H

#include "acnlwa/nn/nex/Socket.h"

namespace nn {
namespace nex {

class QueuingSocket : public ::nn::nex::Socket {
public:
    virtual ~QueuingSocket();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_QUEUINGSOCKET_H
