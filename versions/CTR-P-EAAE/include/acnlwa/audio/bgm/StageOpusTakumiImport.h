#ifndef ACNLWA_AUDIO_BGM_STAGEOPUSTAKUMIIMPORT_H
#define ACNLWA_AUDIO_BGM_STAGEOPUSTAKUMIIMPORT_H

#include "acnlwa/audio/bgm/StageOpusSelect.h"

namespace audio {
namespace bgm {

class StageOpusTakumiImport : public ::audio::bgm::StageOpusSelect {
public:
    virtual void VF03();
    virtual void VF04();
    virtual ~StageOpusTakumiImport();
};

}  // namespace bgm
}  // namespace audio

#endif  // ACNLWA_AUDIO_BGM_STAGEOPUSTAKUMIIMPORT_H
