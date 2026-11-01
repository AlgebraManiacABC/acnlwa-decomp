#ifndef ACNLWA_VOLUMEHIO_H
#define ACNLWA_VOLUMEHIO_H

#include "acnlwa/sead/hostio/Node.h"

class VolumeHIO : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

#endif  // ACNLWA_VOLUMEHIO_H
