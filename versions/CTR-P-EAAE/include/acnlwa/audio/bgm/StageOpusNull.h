#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSNULL_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSNULL_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusNull : public ::audio::bgm::StageOpusBase {
public:
    virtual ~StageOpusNull();
    virtual void VF06();
    virtual void VF12();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSNULL_H
