#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSLOBBYISLAND_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSLOBBYISLAND_H

#include "acnlwa/audio/bgm/StageOpusBase.h"

namespace audio {
namespace bgm {

class StageOpusLobbyIsland : public ::audio::bgm::StageOpusBase {
public:
    virtual void VF03();
    virtual ~StageOpusLobbyIsland();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF11();
    virtual void VF12();
    virtual void VF17();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSLOBBYISLAND_H
