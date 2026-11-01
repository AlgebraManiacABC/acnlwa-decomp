#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSBASE_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSBASE_H

#include "acnlwa/audio/bgm/OpusBase.h"

namespace audio {
namespace bgm {

class StageOpusBase : public ::audio::bgm::OpusBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual ~StageOpusBase();
    virtual void VF06() = 0;
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSBASE_H
