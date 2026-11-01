#ifndef ACNLWA_NN_NEX_PROTECTEDPACKETQUEUE_H
#define ACNLWA_NN_NEX_PROTECTEDPACKETQUEUE_H

#include "acnlwa/nn/nex/PacketQueue.h"

namespace nn {
namespace nex {

class ProtectedPacketQueue : public ::nn::nex::PacketQueue {
public:
    virtual ~ProtectedPacketQueue();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PROTECTEDPACKETQUEUE_H
