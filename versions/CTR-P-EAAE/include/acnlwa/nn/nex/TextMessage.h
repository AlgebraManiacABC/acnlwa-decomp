#ifndef ACNLWA_NN_NEX_TEXTMESSAGE_H
#define ACNLWA_NN_NEX_TEXTMESSAGE_H

#include "acnlwa/nn/nex/_DDL_TextMessage.h"

namespace nn {
namespace nex {

class TextMessage : public ::nn::nex::_DDL_TextMessage {
public:
    virtual ~TextMessage();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_TEXTMESSAGE_H
