#ifndef ACNLWA_NW_SND_INTERNAL_BIQUADFILTERBPF512_H
#define ACNLWA_NW_SND_INTERNAL_BIQUADFILTERBPF512_H

#include "acnlwa/nw/snd/BiquadFilterCallback.h"

namespace nw {
namespace snd {
namespace internal {

class BiquadFilterBpf512 : public ::nw::snd::BiquadFilterCallback {
public:
    virtual ~BiquadFilterBpf512();
    virtual void VF02();
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_BIQUADFILTERBPF512_H
