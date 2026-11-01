#ifndef ACNLWA_NPCACTION_H
#define ACNLWA_NPCACTION_H

#include "acnlwa/NpcMove.h"

class NpcAction : private ::NpcMove {
public:
    virtual ~NpcAction();
};

#endif  // ACNLWA_NPCACTION_H
