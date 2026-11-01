#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_VOICE_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_VOICE_H

#include "acnlwa/nn/snd/CTR/WaveBuffer.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

class Voice {
public:
    Voice();
    void AppendWaveBuffer(int param_2, ::nn::snd::CTR::WaveBuffer *param_3, bool param_4);
    void SetPriority(int priority);
};

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_VOICE_H
