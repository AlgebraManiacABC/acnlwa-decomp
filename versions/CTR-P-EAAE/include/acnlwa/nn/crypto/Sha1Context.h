#ifndef ACNLWA_NN_CRYPTO_SHA1CONTEXT_H
#define ACNLWA_NN_CRYPTO_SHA1CONTEXT_H

#include "acnlwa/nn/crypto/ShaBlock512BitContext.h"

namespace nn {
namespace crypto {

class Sha1Context : public ::nn::crypto::ShaBlock512BitContext {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual ~Sha1Context();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace crypto
}  // namespace nn

#endif  // ACNLWA_NN_CRYPTO_SHA1CONTEXT_H
