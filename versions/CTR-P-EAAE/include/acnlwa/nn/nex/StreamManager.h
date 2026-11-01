#ifndef ACNLWA_NN_NEX_STREAMMANAGER_H
#define ACNLWA_NN_NEX_STREAMMANAGER_H

#include "acnlwa/nn/nex/EndPointEventHandler.h"

namespace nn {
namespace nex {

class StreamManager : public ::nn::nex::EndPointEventHandler {
public:
    virtual ~StreamManager();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_STREAMMANAGER_H
