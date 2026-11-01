#ifndef ACNLWA_NN_NEX_CRITICALSECTION_H
#define ACNLWA_NN_NEX_CRITICALSECTION_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class CriticalSection : public ::nn::nex::RootObject {
public:
    virtual ~CriticalSection();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CRITICALSECTION_H
