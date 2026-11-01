#ifndef ACNLWA_SEAD_AUDIOPLAYERCTR_H
#define ACNLWA_SEAD_AUDIOPLAYERCTR_H

#include "acnlwa/sead/AudioPlayer.h"
#include "acnlwa/nw/snd/SoundArchivePlayer.h"
#include "acnlwa/sead/hostio/Node.h"

namespace sead {

class AudioPlayerCtr : public ::sead::AudioPlayer, public ::nw::snd::SoundArchivePlayer, public ::sead::hostio::Node {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~AudioPlayerCtr();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOPLAYERCTR_H
