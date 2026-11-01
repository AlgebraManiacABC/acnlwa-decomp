#ifndef ACNLWA_NW_SND_INTERNAL_BIQUADFILTERBPF2048_H
#define ACNLWA_NW_SND_INTERNAL_BIQUADFILTERBPF2048_H

#include "acnlwa/nw/snd/BiquadFilterCallback.h"

namespace nw {
namespace snd {
namespace internal {

class BiquadFilterBpf2048 : public ::nw::snd::BiquadFilterCallback {
public:
    virtual ~BiquadFilterBpf2048();
    virtual void VF02();
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_BIQUADFILTERBPF2048_H
