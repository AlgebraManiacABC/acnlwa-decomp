#ifndef ACNLWA_ACVERSATILEFLOW_H
#define ACNLWA_ACVERSATILEFLOW_H

#include "acnlwa/AcSimpleTalk.h"
#include "acnlwa/VersatileFlowTalkRecept.h"

class AcVersatileFlow : public ::AcSimpleTalk< ::VersatileFlowTalkRecept> {
public:
    virtual ~AcVersatileFlow();
    virtual void VF36();
};

#endif  // ACNLWA_ACVERSATILEFLOW_H
