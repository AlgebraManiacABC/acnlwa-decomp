#ifndef ACNLWA_NN_NEX_MD5KEYDERIVATION_H
#define ACNLWA_NN_NEX_MD5KEYDERIVATION_H

#include "acnlwa/nn/nex/KeyDerivation.h"

namespace nn {
namespace nex {

class MD5KeyDerivation : public ::nn::nex::KeyDerivation {
public:
    virtual ~MD5KeyDerivation();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MD5KEYDERIVATION_H
