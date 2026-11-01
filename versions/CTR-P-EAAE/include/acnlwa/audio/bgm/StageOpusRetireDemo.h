#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSRETIREDEMO_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSRETIREDEMO_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusRetireDemo : public ::audio::bgm::StageOpusBase {
public:
    virtual ~StageOpusRetireDemo();
    virtual void VF06();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSRETIREDEMO_H
