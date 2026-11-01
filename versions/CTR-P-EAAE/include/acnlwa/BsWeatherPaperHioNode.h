#ifndef ACNLWA_BSWEATHERPAPERHIONODE_H
#define ACNLWA_BSWEATHERPAPERHIONODE_H

#include "acnlwa/sead/hostio/Node.h"

class BsWeatherPaperHioNode : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

#endif  // ACNLWA_BSWEATHERPAPERHIONODE_H
