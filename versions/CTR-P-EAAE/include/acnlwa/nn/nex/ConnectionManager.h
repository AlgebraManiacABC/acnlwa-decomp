#ifndef ACNLWA_NN_NEX_CONNECTIONMANAGER_H
#define ACNLWA_NN_NEX_CONNECTIONMANAGER_H

#include "acnlwa/nn/nex/TransportEventHandler.h"

namespace nn {
namespace nex {

class ConnectionManager : public ::nn::nex::TransportEventHandler {
public:
    virtual ~ConnectionManager();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CONNECTIONMANAGER_H
