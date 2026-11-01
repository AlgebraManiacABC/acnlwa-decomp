#ifndef ACNLWA_SEAD_AUDIOROMSOUNDARCHIVECTR_H
#define ACNLWA_SEAD_AUDIOROMSOUNDARCHIVECTR_H

#include "acnlwa/sead/AudioDeviceSoundArchiveBaseCtr.h"
#include "acnlwa/nw/snd/RomSoundArchive.h"

namespace sead {

class AudioRomSoundArchiveCtr : public ::sead::AudioDeviceSoundArchiveBaseCtr< ::nw::snd::RomSoundArchive> {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~AudioRomSoundArchiveCtr();
    virtual void AudioSoundArchiveBaseCtr_VF04();
    virtual void AudioSoundArchiveBaseCtr_VF05();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOROMSOUNDARCHIVECTR_H
