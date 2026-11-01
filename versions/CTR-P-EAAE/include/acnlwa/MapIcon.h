#ifndef ACNLWA_MAPICON_H
#define ACNLWA_MAPICON_H

#include "acnlwa/IconBase.h"

class MapIcon : public ::IconBase {
public:
    virtual ~MapIcon();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

#endif  // ACNLWA_MAPICON_H
