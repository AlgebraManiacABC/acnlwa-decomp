#ifndef ACNLWA_SEAD_AUDIOMEMORYSOUNDARCHIVECTR_H
#define ACNLWA_SEAD_AUDIOMEMORYSOUNDARCHIVECTR_H

#include "acnlwa/sead/AudioSoundArchiveBaseCtr.h"
#include "acnlwa/nw/snd/MemorySoundArchive.h"

namespace sead {

class AudioMemorySoundArchiveCtr : public ::sead::AudioSoundArchiveBaseCtr, public ::nw::snd::MemorySoundArchive {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~AudioMemorySoundArchiveCtr();
    virtual void AudioSoundArchiveBaseCtr_VF04();
    virtual void AudioSoundArchiveBaseCtr_VF05();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOMEMORYSOUNDARCHIVECTR_H
