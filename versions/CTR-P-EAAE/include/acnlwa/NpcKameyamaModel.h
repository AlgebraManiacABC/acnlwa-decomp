#ifndef ACNLWA_NPCKAMEYAMAMODEL_H
#define ACNLWA_NPCKAMEYAMAMODEL_H

#include "acnlwa/NpcSimpleModel.h"

class NpcKameyamaModel : public ::NpcSimpleModel {
public:
    virtual void VF00();
    virtual ~NpcKameyamaModel();
};

#endif  // ACNLWA_NPCKAMEYAMAMODEL_H
