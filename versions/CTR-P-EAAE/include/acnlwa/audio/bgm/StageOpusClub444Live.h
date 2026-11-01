#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSCLUB444LIVE_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSCLUB444LIVE_H

#include "acnlwa/audio/bgm/StageOpusShopBase.h"

namespace audio {
namespace bgm {

class StageOpusClub444Live : public ::audio::bgm::StageOpusShopBase {
public:
    virtual void VF03();
    virtual ~StageOpusClub444Live();
    virtual void VF06();
    virtual void VF07();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF18();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSCLUB444LIVE_H
