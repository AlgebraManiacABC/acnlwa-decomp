#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSEVIDENCE_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSEVIDENCE_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusEvidence : public ::audio::bgm::StageOpusBase {
public:
    virtual ~StageOpusEvidence();
    virtual void VF06();
    virtual void VF07();
    virtual void VF12();
    virtual void VF16();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSEVIDENCE_H
