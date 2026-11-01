#ifndef ACNLWA_NN_NEX_USERMESSAGE_H
#define ACNLWA_NN_NEX_USERMESSAGE_H

#include "acnlwa/nn/nex/_DDL_UserMessage.h"

namespace nn {
namespace nex {

class UserMessage : public ::nn::nex::_DDL_UserMessage {
public:
    virtual ~UserMessage();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_USERMESSAGE_H
