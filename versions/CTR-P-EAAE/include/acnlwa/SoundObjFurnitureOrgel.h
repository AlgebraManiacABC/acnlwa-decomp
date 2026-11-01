#ifndef ACNLWA_SOUNDOBJFURNITUREORGEL_H
#define ACNLWA_SOUNDOBJFURNITUREORGEL_H

#include "acnlwa/SoundObjFurniture.h"

class SoundObjFurnitureOrgel : public ::SoundObjFurniture {
public:
    virtual ~SoundObjFurnitureOrgel();
    virtual void VF03();
    virtual void VF15();
};

#endif  // ACNLWA_SOUNDOBJFURNITUREORGEL_H
