#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSPROLOGUE1_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSPROLOGUE1_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusPrologue1 : public ::audio::bgm::StageOpusBase {
public:
    virtual ~StageOpusPrologue1();
    virtual void VF06();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF14();
    virtual void VF16();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSPROLOGUE1_H
