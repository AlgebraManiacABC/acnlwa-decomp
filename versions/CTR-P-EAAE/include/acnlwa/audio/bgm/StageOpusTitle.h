#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSTITLE_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSTITLE_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusTitle : public ::audio::bgm::StageOpusBase {
public:
    virtual void VF03();
    virtual ~StageOpusTitle();
    virtual void VF06();
    virtual void VF07();
    virtual void VF11();
    virtual void VF12();
    virtual void VF14();
    virtual void VF16();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSTITLE_H
