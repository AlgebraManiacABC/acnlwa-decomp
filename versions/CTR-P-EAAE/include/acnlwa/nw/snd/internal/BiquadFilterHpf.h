#ifndef ACNLWA_NW_SND_INTERNAL_BIQUADFILTERHPF_H
#define ACNLWA_NW_SND_INTERNAL_BIQUADFILTERHPF_H

#include "acnlwa/nw/snd/BiquadFilterCallback.h"

namespace nw {
namespace snd {
namespace internal {

class BiquadFilterHpf : public ::nw::snd::BiquadFilterCallback {
public:
    virtual ~BiquadFilterHpf();
    virtual void VF02();
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_BIQUADFILTERHPF_H
