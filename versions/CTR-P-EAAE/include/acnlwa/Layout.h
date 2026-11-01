#ifndef ACNLWA_LAYOUT_H
#define ACNLWA_LAYOUT_H

#include "acnlwa/ssys/ma/lyt/Layout.h"

class Layout : public ::ssys::ma::lyt::Layout {
public:
    virtual ~Layout();
    virtual void VF05();
    virtual void VF06();
};

#endif  // ACNLWA_LAYOUT_H
