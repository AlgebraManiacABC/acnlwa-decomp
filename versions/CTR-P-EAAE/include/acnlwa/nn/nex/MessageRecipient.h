#ifndef ACNLWA_NN_NEX_MESSAGERECIPIENT_H
#define ACNLWA_NN_NEX_MESSAGERECIPIENT_H

#include "acnlwa/nn/nex/_DDL_MessageRecipient.h"

namespace nn {
namespace nex {

class MessageRecipient : public ::nn::nex::_DDL_MessageRecipient {
public:
    virtual ~MessageRecipient();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MESSAGERECIPIENT_H
