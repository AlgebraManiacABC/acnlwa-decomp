#ifndef ACNLWA_NN_CRYPTO_AES_H
#define ACNLWA_NN_CRYPTO_AES_H

#include "acnlwa/nn/crypto/BlockCipher.h"

namespace nn {
namespace crypto {

template <unsigned int T0>
class Aes : public ::nn::crypto::BlockCipher {
public:
    virtual ~Aes();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

template <unsigned int T0>
Aes<T0>::~Aes() {}

template <unsigned int T0>
void Aes<T0>::VF02() {}

template <unsigned int T0>
void Aes<T0>::VF03() {}

template <unsigned int T0>
void Aes<T0>::VF04() {}

template <unsigned int T0>
void Aes<T0>::VF05() {}

template <unsigned int T0>
void Aes<T0>::VF06() {}


}  // namespace crypto
}  // namespace nn

#endif  // ACNLWA_NN_CRYPTO_AES_H
