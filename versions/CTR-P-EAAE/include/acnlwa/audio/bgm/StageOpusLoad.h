#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSLOAD_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSLOAD_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusLoad : public ::audio::bgm::StageOpusBase {
public:
    virtual ~StageOpusLoad();
    virtual void VF06();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSLOAD_H
