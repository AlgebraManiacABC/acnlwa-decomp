#ifndef ACNLWA_SEAD_AUDIOSOUNDARCHIVEBASECTR_H
#define ACNLWA_SEAD_AUDIOSOUNDARCHIVEBASECTR_H

namespace sead {

class AudioSoundArchiveBaseCtr {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~AudioSoundArchiveBaseCtr();
    virtual void AudioSoundArchiveBaseCtr_VF04() = 0;
    virtual void AudioSoundArchiveBaseCtr_VF05() = 0;
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOSOUNDARCHIVEBASECTR_H
