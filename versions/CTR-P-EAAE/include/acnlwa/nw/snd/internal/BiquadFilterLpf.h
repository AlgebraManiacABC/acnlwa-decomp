#ifndef ACNLWA_NW_SND_INTERNAL_BIQUADFILTERLPF_H
#define ACNLWA_NW_SND_INTERNAL_BIQUADFILTERLPF_H

#include "acnlwa/nw/snd/BiquadFilterCallback.h"

namespace nw {
namespace snd {
namespace internal {

class BiquadFilterLpf : public ::nw::snd::BiquadFilterCallback {
public:
    virtual ~BiquadFilterLpf();
    virtual void VF02();
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_BIQUADFILTERLPF_H
