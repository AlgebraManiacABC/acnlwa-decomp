#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSUPDATEPROLOGUE_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSUPDATEPROLOGUE_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusUpdatePrologue : public ::audio::bgm::StageOpusBase {
public:
    virtual void VF03();
    virtual ~StageOpusUpdatePrologue();
    virtual void VF06();
    virtual void VF10();
    virtual void VF11();
    virtual void VF14();
    virtual void VF16();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSUPDATEPROLOGUE_H
