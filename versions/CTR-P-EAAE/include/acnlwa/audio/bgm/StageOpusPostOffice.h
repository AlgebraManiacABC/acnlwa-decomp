#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSPOSTOFFICE_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSPOSTOFFICE_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusPostOffice : public ::audio::bgm::StageOpusBase {
public:
    virtual void VF03();
    virtual ~StageOpusPostOffice();
    virtual void VF06();
    virtual void VF07();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSPOSTOFFICE_H
