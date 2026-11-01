#ifndef ACNLWA_BSWEATHERSNOWHIONODE_H
#define ACNLWA_BSWEATHERSNOWHIONODE_H

#include "acnlwa/sead/hostio/Node.h"

class BsWeatherSnowHioNode : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

#endif  // ACNLWA_BSWEATHERSNOWHIONODE_H
