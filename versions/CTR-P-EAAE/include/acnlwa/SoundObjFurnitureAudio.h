#ifndef ACNLWA_SOUNDOBJFURNITUREAUDIO_H
#define ACNLWA_SOUNDOBJFURNITUREAUDIO_H

#include "acnlwa/SoundObjFurniture.h"

class SoundObjFurnitureAudio : public ::SoundObjFurniture {
public:
    virtual ~SoundObjFurnitureAudio();
    virtual void VF03();
    virtual void VF14();
    virtual void VF15();
};

#endif  // ACNLWA_SOUNDOBJFURNITUREAUDIO_H
