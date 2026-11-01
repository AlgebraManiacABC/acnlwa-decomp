#ifndef ACNLWA_SELECTBASE_H
#define ACNLWA_SELECTBASE_H

#include "acnlwa/CatalogBase.h"

class SelectBase : public ::CatalogBase {
public:
    virtual ~SelectBase();
    virtual void VF03();
    virtual void VF04();
    virtual void VF06();
    virtual void VF07();
    virtual void VF09();
    virtual void VF12();
    virtual void VF15();
    virtual void VF16();
    virtual void VF18();
    virtual void VF24();
    virtual void VF25() = 0;
};

#endif  // ACNLWA_SELECTBASE_H
