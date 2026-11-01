#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSRESULT_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSRESULT_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusResult : public ::audio::bgm::StageOpusBase {
public:
    virtual ~StageOpusResult();
    virtual void VF06();
    virtual void VF08();
    virtual void VF11();
    virtual void VF12();
    virtual void VF14();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSRESULT_H
