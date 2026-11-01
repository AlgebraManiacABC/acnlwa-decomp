#ifndef ACNLWA_NN_NEX_MD5CHECKSUM_H
#define ACNLWA_NN_NEX_MD5CHECKSUM_H

#include "acnlwa/nn/nex/ChecksumAlgorithm.h"

namespace nn {
namespace nex {

class MD5Checksum : public ::nn::nex::ChecksumAlgorithm {
public:
    virtual ~MD5Checksum();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MD5CHECKSUM_H
