#ifndef ACNLWA_NN_NEX_SERVERPROTOCOL_H
#define ACNLWA_NN_NEX_SERVERPROTOCOL_H

#include "acnlwa/nn/nex/Protocol.h"

namespace nn {
namespace nex {

class ServerProtocol : public ::nn::nex::Protocol {
public:
    virtual ~ServerProtocol();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF08();
    virtual void VF10();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20() = 0;
    virtual void VF21();
    virtual void VF22();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SERVERPROTOCOL_H
