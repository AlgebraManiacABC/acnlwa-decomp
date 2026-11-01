#ifndef ACNLWA_AUDIO_BGM_EVOPUSHIDE_H
#define ACNLWA_AUDIO_BGM_EVOPUSHIDE_H

#include "acnlwa/audio/bgm/EvOpusBase.h"

namespace audio {
namespace bgm {

class EvOpusHide : public ::audio::bgm::EvOpusBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual ~EvOpusHide();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_EVOPUSHIDE_H
