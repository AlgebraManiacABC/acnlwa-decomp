#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSGALLERY_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSGALLERY_H

#include "acnlwa/audio/bgm/StageOpusShopBase.h"

namespace audio {
namespace bgm {

class StageOpusGallery : public ::audio::bgm::StageOpusShopBase {
public:
    virtual void VF03();
    virtual ~StageOpusGallery();
    virtual void VF06();
    virtual void VF07();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF18();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSGALLERY_H
