#ifndef ACNLWA_NN_NEX_TRANSPORTBUFFERTHREAD_H
#define ACNLWA_NN_NEX_TRANSPORTBUFFERTHREAD_H

#include "acnlwa/nn/nex/TransportBufferThreadInterface.h"

namespace nn {
namespace nex {

class TransportBufferThread : public ::nn::nex::TransportBufferThreadInterface {
public:
    virtual ~TransportBufferThread();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_TRANSPORTBUFFERTHREAD_H
