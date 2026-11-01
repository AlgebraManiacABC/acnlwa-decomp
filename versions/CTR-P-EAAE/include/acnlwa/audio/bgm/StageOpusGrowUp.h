#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSGROWUP_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSGROWUP_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusGrowUp : public ::audio::bgm::StageOpusBase {
public:
    virtual ~StageOpusGrowUp();
    virtual void VF06();
    virtual void VF07();
    virtual void VF12();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSGROWUP_H
