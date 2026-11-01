#ifndef ACNLWA_NN_NEX_SOCKETDRIVER_H
#define ACNLWA_NN_NEX_SOCKETDRIVER_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class SocketDriver : public ::nn::nex::RootObject {
public:
    class Socket : public ::nn::nex::RootObject {
    public:
    };
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SOCKETDRIVER_H
