#ifndef ACNLWA_SEAD_AUDIOSOUNDDATAMGRCTR_H
#define ACNLWA_SEAD_AUDIOSOUNDDATAMGRCTR_H

#include "acnlwa/nw/snd/SoundDataManager.h"

namespace sead {

class AudioSoundDataMgrCtr : public ::nw::snd::SoundDataManager {
public:
    virtual ~AudioSoundDataMgrCtr();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOSOUNDDATAMGRCTR_H
