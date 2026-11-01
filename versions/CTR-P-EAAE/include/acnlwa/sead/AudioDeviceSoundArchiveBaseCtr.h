#ifndef ACNLWA_SEAD_AUDIODEVICESOUNDARCHIVEBASECTR_H
#define ACNLWA_SEAD_AUDIODEVICESOUNDARCHIVEBASECTR_H

#include "acnlwa/sead/AudioSoundArchiveBaseCtr.h"

namespace sead {

template <typename T0>
class AudioDeviceSoundArchiveBaseCtr : public ::sead::AudioSoundArchiveBaseCtr, public T0 {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~AudioDeviceSoundArchiveBaseCtr();
    virtual void AudioSoundArchiveBaseCtr_VF05();
};

template <typename T0>
void AudioDeviceSoundArchiveBaseCtr<T0>::VF00() {}

template <typename T0>
void AudioDeviceSoundArchiveBaseCtr<T0>::VF01() {}

template <typename T0>
AudioDeviceSoundArchiveBaseCtr<T0>::~AudioDeviceSoundArchiveBaseCtr() {}

template <typename T0>
void AudioDeviceSoundArchiveBaseCtr<T0>::AudioSoundArchiveBaseCtr_VF05() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIODEVICESOUNDARCHIVEBASECTR_H
