#ifndef ACNLWA_NN_NEX_FORCEDCRITICALSECTION_H
#define ACNLWA_NN_NEX_FORCEDCRITICALSECTION_H

#include "acnlwa/nn/nex/CriticalSection.h"

namespace nn {
namespace nex {

class ForcedCriticalSection : public ::nn::nex::CriticalSection {
public:
    virtual ~ForcedCriticalSection();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_FORCEDCRITICALSECTION_H
