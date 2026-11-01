#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSCEREMONY_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSCEREMONY_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusCeremony : public ::audio::bgm::StageOpusBase {
public:
    virtual void VF03();
    virtual ~StageOpusCeremony();
    virtual void VF06();
    virtual void VF11();
    virtual void VF12();
    virtual void VF14();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSCEREMONY_H
