#ifndef ACNLWA_SOUNDOBJFURNITUREINST_H
#define ACNLWA_SOUNDOBJFURNITUREINST_H

#include "acnlwa/SoundObjFurniture.h"

class SoundObjFurnitureInst : public ::SoundObjFurniture {
public:
    virtual ~SoundObjFurnitureInst();
    virtual void VF03();
    virtual void VF15();
};

#endif  // ACNLWA_SOUNDOBJFURNITUREINST_H
