#ifndef ACNLWA_NN_NEX_HMACCHECKSUM_H
#define ACNLWA_NN_NEX_HMACCHECKSUM_H

#include "acnlwa/nn/nex/KeyedChecksumAlgorithm.h"

namespace nn {
namespace nex {

class HMACChecksum : public ::nn::nex::KeyedChecksumAlgorithm {
public:
    virtual ~HMACChecksum();
    virtual void VF02();
    virtual void VF03();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_HMACCHECKSUM_H
