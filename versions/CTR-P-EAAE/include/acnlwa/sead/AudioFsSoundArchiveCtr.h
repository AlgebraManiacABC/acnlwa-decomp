#ifndef ACNLWA_SEAD_AUDIOFSSOUNDARCHIVECTR_H
#define ACNLWA_SEAD_AUDIOFSSOUNDARCHIVECTR_H

#include "acnlwa/sead/AudioDeviceSoundArchiveBaseCtr.h"
#include "acnlwa/nw/snd/FsSoundArchive.h"

namespace sead {

class AudioFsSoundArchiveCtr : public ::sead::AudioDeviceSoundArchiveBaseCtr< ::nw::snd::FsSoundArchive> {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~AudioFsSoundArchiveCtr();
    virtual void AudioSoundArchiveBaseCtr_VF04();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOFSSOUNDARCHIVECTR_H
