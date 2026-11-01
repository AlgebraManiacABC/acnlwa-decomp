#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSCAFESTAFF_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSCAFESTAFF_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusCafeStaff : public ::audio::bgm::StageOpusBase {
public:
    virtual ~StageOpusCafeStaff();
    virtual void VF06();
    virtual void VF11();
    virtual void VF14();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSCAFESTAFF_H
