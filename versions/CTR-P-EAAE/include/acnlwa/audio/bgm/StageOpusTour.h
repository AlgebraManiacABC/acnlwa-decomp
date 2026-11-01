#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSTOUR_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSTOUR_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusTour : public ::audio::bgm::StageOpusBase {
public:
    virtual ~StageOpusTour();
    virtual void VF06();
    virtual void VF07();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF16();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSTOUR_H
