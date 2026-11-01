#ifndef ACNLWA_NN_CRYPTO_MD5CONTEXT_H
#define ACNLWA_NN_CRYPTO_MD5CONTEXT_H

#include "acnlwa/nn/crypto/HashContextBase.h"

namespace nn {
namespace crypto {

class Md5Context : public ::nn::crypto::HashContextBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual ~Md5Context();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace crypto
}  // namespace nn

#endif  // ACNLWA_NN_CRYPTO_MD5CONTEXT_H
