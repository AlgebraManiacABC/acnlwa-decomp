#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSVILLAGEDOWNTOWN_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSVILLAGEDOWNTOWN_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusVillageDowntown : public ::audio::bgm::StageOpusBase {
public:
    virtual void VF03();
    virtual ~StageOpusVillageDowntown();
    virtual void VF06();
    virtual void VF07();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF16();
    virtual void VF17();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSVILLAGEDOWNTOWN_H
