#ifndef ACNLWA_NN_NEX_STREAM_H
#define ACNLWA_NN_NEX_STREAM_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class Stream : public ::nn::nex::RootObject {
public:
    virtual ~Stream();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_STREAM_H
