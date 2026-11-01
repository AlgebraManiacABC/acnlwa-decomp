#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSPAVILION_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSPAVILION_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusPavilion : public ::audio::bgm::StageOpusBase {
public:
    virtual void VF03();
    virtual ~StageOpusPavilion();
    virtual void VF06();
    virtual void VF07();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSPAVILION_H
