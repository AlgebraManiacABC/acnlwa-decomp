#ifndef ACNLWA_COMMONBUTTONSINGLE_H
#define ACNLWA_COMMONBUTTONSINGLE_H

#include "acnlwa/ButtonActionNode.h"

class CommonButtonSingle : public ::ButtonActionNode {
public:
    virtual ~CommonButtonSingle();
    virtual void VF04();
    virtual void VF14();
};

#endif  // ACNLWA_COMMONBUTTONSINGLE_H
