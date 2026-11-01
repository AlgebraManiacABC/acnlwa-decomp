#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSSAVE_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSSAVE_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusSave : public ::audio::bgm::StageOpusBase {
public:
    virtual ~StageOpusSave();
    virtual void VF06();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSSAVE_H
