#ifndef ACNLWA_NN_NEX__DDL_BINARYMESSAGE_H
#define ACNLWA_NN_NEX__DDL_BINARYMESSAGE_H

#include "acnlwa/nn/nex/UserMessage.h"

namespace nn {
namespace nex {

class _DDL_BinaryMessage : public ::nn::nex::UserMessage {
public:
    virtual ~_DDL_BinaryMessage();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX__DDL_BINARYMESSAGE_H
