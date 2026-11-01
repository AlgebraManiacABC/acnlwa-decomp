#ifndef ACNLWA_NN_NEX__DDL_USERMESSAGE_H
#define ACNLWA_NN_NEX__DDL_USERMESSAGE_H

#include "acnlwa/nn/nex/Data.h"

namespace nn {
namespace nex {

class _DDL_UserMessage : public ::nn::nex::Data {
public:
    virtual ~_DDL_UserMessage();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX__DDL_USERMESSAGE_H
