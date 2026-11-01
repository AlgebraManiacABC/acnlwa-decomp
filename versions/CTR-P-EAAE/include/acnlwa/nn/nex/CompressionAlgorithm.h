#ifndef ACNLWA_NN_NEX_COMPRESSIONALGORITHM_H
#define ACNLWA_NN_NEX_COMPRESSIONALGORITHM_H

#include "acnlwa/nn/nex/PluginObject.h"

namespace nn {
namespace nex {

class CompressionAlgorithm : public ::nn::nex::PluginObject {
public:
    virtual ~CompressionAlgorithm();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_COMPRESSIONALGORITHM_H
