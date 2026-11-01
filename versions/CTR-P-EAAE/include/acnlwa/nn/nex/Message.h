#ifndef ACNLWA_NN_NEX_MESSAGE_H
#define ACNLWA_NN_NEX_MESSAGE_H

#include "acnlwa/nn/nex/ByteStream.h"

namespace nn {
namespace nex {

class Message : public ::nn::nex::ByteStream {
public:
    virtual ~Message();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MESSAGE_H
