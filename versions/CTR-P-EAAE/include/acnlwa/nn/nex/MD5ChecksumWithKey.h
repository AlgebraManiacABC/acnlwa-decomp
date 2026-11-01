#ifndef ACNLWA_NN_NEX_MD5CHECKSUMWITHKEY_H
#define ACNLWA_NN_NEX_MD5CHECKSUMWITHKEY_H

#include "acnlwa/nn/nex/KeyedChecksumAlgorithm.h"

namespace nn {
namespace nex {

class MD5ChecksumWithKey : public ::nn::nex::KeyedChecksumAlgorithm {
public:
    virtual ~MD5ChecksumWithKey();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MD5CHECKSUMWITHKEY_H
