#ifndef ACNLWA_NPCKOTOBUKIMODEL_H
#define ACNLWA_NPCKOTOBUKIMODEL_H

#include "acnlwa/NpcTopsChangeModel.h"

class NpcKotobukiModel : public ::NpcTopsChangeModel {
public:
    virtual void VF00();
    virtual ~NpcKotobukiModel();
};

#endif  // ACNLWA_NPCKOTOBUKIMODEL_H
