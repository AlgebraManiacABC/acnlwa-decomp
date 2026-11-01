#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSTOURDESK_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSTOURDESK_H

#include "acnlwa/audio/bgm/StageOpusShopBase.h"

namespace audio {
namespace bgm {

class StageOpusTourDesk : public ::audio::bgm::StageOpusShopBase {
public:
    virtual void VF03();
    virtual ~StageOpusTourDesk();
    virtual void VF06();
    virtual void VF07();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF18();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSTOURDESK_H
