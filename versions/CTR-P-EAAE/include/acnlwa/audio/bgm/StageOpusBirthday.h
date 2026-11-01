#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSBIRTHDAY_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSBIRTHDAY_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusBirthday : public ::audio::bgm::StageOpusBase {
public:
    virtual ~StageOpusBirthday();
    virtual void VF06();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSBIRTHDAY_H
