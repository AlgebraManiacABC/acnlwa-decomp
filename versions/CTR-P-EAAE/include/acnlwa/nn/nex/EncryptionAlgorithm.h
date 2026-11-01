#ifndef ACNLWA_NN_NEX_ENCRYPTIONALGORITHM_H
#define ACNLWA_NN_NEX_ENCRYPTIONALGORITHM_H

#include "acnlwa/nn/nex/PluginObject.h"

namespace nn {
namespace nex {

class EncryptionAlgorithm : public ::nn::nex::PluginObject {
public:
    virtual ~EncryptionAlgorithm();
    virtual void VF02() = 0;
    virtual void VF03();
    virtual void VF04() = 0;
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_ENCRYPTIONALGORITHM_H
