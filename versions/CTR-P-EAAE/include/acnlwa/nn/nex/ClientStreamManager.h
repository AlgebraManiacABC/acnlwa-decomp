#ifndef ACNLWA_NN_NEX_CLIENTSTREAMMANAGER_H
#define ACNLWA_NN_NEX_CLIENTSTREAMMANAGER_H

#include "acnlwa/nn/nex/StreamManager.h"

namespace nn {
namespace nex {

class ClientStreamManager : public ::nn::nex::StreamManager {
public:
    virtual ~ClientStreamManager();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CLIENTSTREAMMANAGER_H
