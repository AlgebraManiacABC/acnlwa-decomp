#ifndef ACNLWA_BSWEATHERRAINHIONODE_H
#define ACNLWA_BSWEATHERRAINHIONODE_H

#include "acnlwa/sead/hostio/Node.h"

class BsWeatherRainHioNode : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

#endif  // ACNLWA_BSWEATHERRAINHIONODE_H
