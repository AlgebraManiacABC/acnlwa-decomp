#ifndef ACNLWA_NN_NEX_BINARYMESSAGE_H
#define ACNLWA_NN_NEX_BINARYMESSAGE_H

#include "acnlwa/nn/nex/_DDL_BinaryMessage.h"

namespace nn {
namespace nex {

class BinaryMessage : public ::nn::nex::_DDL_BinaryMessage {
public:
    virtual ~BinaryMessage();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_BINARYMESSAGE_H
