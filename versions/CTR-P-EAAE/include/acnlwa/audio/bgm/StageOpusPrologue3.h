#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSPROLOGUE3_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSPROLOGUE3_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusPrologue3 : public ::audio::bgm::StageOpusBase {
public:
    virtual void VF03();
    virtual ~StageOpusPrologue3();
    virtual void VF06();
    virtual void VF08();
    virtual void VF11();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSPROLOGUE3_H
