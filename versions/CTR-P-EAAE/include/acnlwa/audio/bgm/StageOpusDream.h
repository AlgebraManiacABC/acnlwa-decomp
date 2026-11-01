#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSDREAM_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSDREAM_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusDream : public ::audio::bgm::StageOpusBase {
public:
    virtual void VF03();
    virtual ~StageOpusDream();
    virtual void VF06();
    virtual void VF07();
    virtual void VF09();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSDREAM_H
