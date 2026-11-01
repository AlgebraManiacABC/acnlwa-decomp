#ifndef ACNLWA_SEAD_AUDIOSOUNDHEAPCTR_H
#define ACNLWA_SEAD_AUDIOSOUNDHEAPCTR_H

#include "acnlwa/nw/snd/SoundHeap.h"
#include "acnlwa/sead/hostio/Node.h"

namespace sead {

class AudioSoundHeapCtr : public ::nw::snd::SoundHeap, public ::sead::hostio::Node {
public:
    virtual ~AudioSoundHeapCtr();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOSOUNDHEAPCTR_H
