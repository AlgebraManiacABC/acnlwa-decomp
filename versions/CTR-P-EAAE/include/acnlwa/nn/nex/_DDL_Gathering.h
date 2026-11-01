#ifndef ACNLWA_NN_NEX__DDL_GATHERING_H
#define ACNLWA_NN_NEX__DDL_GATHERING_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class _DDL_Gathering : public ::nn::nex::RootObject {
public:
    virtual ~_DDL_Gathering();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX__DDL_GATHERING_H
