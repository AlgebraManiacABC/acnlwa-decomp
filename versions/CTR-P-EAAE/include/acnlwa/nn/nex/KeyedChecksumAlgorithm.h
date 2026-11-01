#ifndef ACNLWA_NN_NEX_KEYEDCHECKSUMALGORITHM_H
#define ACNLWA_NN_NEX_KEYEDCHECKSUMALGORITHM_H

#include "acnlwa/nn/nex/ChecksumAlgorithm.h"

namespace nn {
namespace nex {

class KeyedChecksumAlgorithm : public ::nn::nex::ChecksumAlgorithm {
public:
    virtual ~KeyedChecksumAlgorithm();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04();
    virtual void VF05();
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_KEYEDCHECKSUMALGORITHM_H
