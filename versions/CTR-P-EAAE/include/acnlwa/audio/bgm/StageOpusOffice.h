#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSOFFICE_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSOFFICE_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusOffice : public ::audio::bgm::StageOpusBase {
public:
    virtual void VF03();
    virtual ~StageOpusOffice();
    virtual void VF06();
    virtual void VF07();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSOFFICE_H
