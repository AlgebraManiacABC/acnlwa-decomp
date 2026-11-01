#ifndef ACNLWA_PARAMETERHIO_H
#define ACNLWA_PARAMETERHIO_H

#include "acnlwa/sead/hostio/Node.h"

class ParameterHIO : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

#endif  // ACNLWA_PARAMETERHIO_H
