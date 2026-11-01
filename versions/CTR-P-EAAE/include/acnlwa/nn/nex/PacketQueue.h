#ifndef ACNLWA_NN_NEX_PACKETQUEUE_H
#define ACNLWA_NN_NEX_PACKETQUEUE_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class PacketQueue : public ::nn::nex::RootObject {
public:
    virtual ~PacketQueue();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PACKETQUEUE_H
