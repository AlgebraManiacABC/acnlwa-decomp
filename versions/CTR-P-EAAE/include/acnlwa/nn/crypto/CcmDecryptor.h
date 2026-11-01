#ifndef ACNLWA_NN_CRYPTO_CCMDECRYPTOR_H
#define ACNLWA_NN_CRYPTO_CCMDECRYPTOR_H

#include "acnlwa/nn/crypto/AuthenticatedDecryptor.h"

namespace nn {
namespace crypto {

class CcmDecryptor : public ::nn::crypto::AuthenticatedDecryptor {
public:
    virtual ~CcmDecryptor();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

}  // namespace crypto
}  // namespace nn

#endif  // ACNLWA_NN_CRYPTO_CCMDECRYPTOR_H
