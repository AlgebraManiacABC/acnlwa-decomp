#ifndef ACNLWA_NN_NEX_ZLIBCOMPRESSION_H
#define ACNLWA_NN_NEX_ZLIBCOMPRESSION_H

#include "acnlwa/nn/nex/CompressionAlgorithm.h"

namespace nn {
namespace nex {

class ZLibCompression : public ::nn::nex::CompressionAlgorithm {
public:
    virtual ~ZLibCompression();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_ZLIBCOMPRESSION_H
