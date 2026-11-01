#ifndef ACNLWA_NN_NEX_SOCKET_H
#define ACNLWA_NN_NEX_SOCKET_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class Socket : public ::nn::nex::RootObject {
public:
    virtual ~Socket();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SOCKET_H
