#ifndef ACNLWA_NN_SND_CTR_VOICEMANAGER_H
#define ACNLWA_NN_SND_CTR_VOICEMANAGER_H

#include "VoiceImpl.h"

namespace nn {
namespace snd {
namespace CTR {

struct VoiceImplWrapper {
    char unk_0x00[0x68];
    VoiceImpl * unk_0x68;
};

class VoiceManager {
public:
    void UpdateWaveBufferList();

    private:
    char unk_0x0000[0x18dc];
    VoiceImplWrapper * unk_0x18dc[24];
};

}  // namespace CTR
}  // namespace snd
}  // namespace nn

#endif  // ACNLWA_NN_SND_CTR_VOICEMANAGER_H
