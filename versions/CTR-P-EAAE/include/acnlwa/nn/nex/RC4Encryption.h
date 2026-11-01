#ifndef ACNLWA_NN_NEX_RC4ENCRYPTION_H
#define ACNLWA_NN_NEX_RC4ENCRYPTION_H

#include "acnlwa/nn/nex/EncryptionAlgorithm.h"

namespace nn {
namespace nex {

class RC4Encryption : public ::nn::nex::EncryptionAlgorithm {
public:
    virtual ~RC4Encryption();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_RC4ENCRYPTION_H
