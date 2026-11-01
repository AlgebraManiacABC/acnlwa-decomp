#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSPROLOGUE2_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSPROLOGUE2_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusPrologue2 : public ::audio::bgm::StageOpusBase {
public:
    virtual void VF03();
    virtual ~StageOpusPrologue2();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF16();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSPROLOGUE2_H
