#ifndef ACNLWA_BSWEATHERSAKURAHIONODE_H
#define ACNLWA_BSWEATHERSAKURAHIONODE_H

#include "acnlwa/sead/hostio/Node.h"

class BsWeatherSakuraHioNode : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

#endif  // ACNLWA_BSWEATHERSAKURAHIONODE_H
