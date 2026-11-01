#ifndef ACNLWA_ACVERSATILEPLATE_H
#define ACNLWA_ACVERSATILEPLATE_H

#include "acnlwa/AcSimpleTalk.h"
#include "acnlwa/VersatilePlateTalkRecept.h"

class AcVersatilePlate : public ::AcSimpleTalk< ::VersatilePlateTalkRecept> {
public:
    virtual ~AcVersatilePlate();
    virtual void VF36();
};

#endif  // ACNLWA_ACVERSATILEPLATE_H
