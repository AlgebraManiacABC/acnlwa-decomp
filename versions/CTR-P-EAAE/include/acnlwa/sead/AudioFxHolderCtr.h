#ifndef ACNLWA_SEAD_AUDIOFXHOLDERCTR_H
#define ACNLWA_SEAD_AUDIOFXHOLDERCTR_H

#include "acnlwa/sead/AudioFxHolder.h"

namespace sead {

template <typename T0, typename T1>
class AudioFxHolderCtr : public ::sead::AudioFxHolder {
public:
    virtual ~AudioFxHolderCtr();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

template <typename T0, typename T1>
AudioFxHolderCtr<T0, T1>::~AudioFxHolderCtr() {}

template <typename T0, typename T1>
void AudioFxHolderCtr<T0, T1>::VF02() {}

template <typename T0, typename T1>
void AudioFxHolderCtr<T0, T1>::VF03() {}

template <typename T0, typename T1>
void AudioFxHolderCtr<T0, T1>::VF04() {}

template <typename T0, typename T1>
void AudioFxHolderCtr<T0, T1>::VF05() {}

template <typename T0, typename T1>
void AudioFxHolderCtr<T0, T1>::VF06() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOFXHOLDERCTR_H
