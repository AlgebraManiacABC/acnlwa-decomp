#ifndef ACNLWA_CATALOGBASE_H
#define ACNLWA_CATALOGBASE_H

#include "acnlwa/state/Mode.h"

class CatalogBase : public ::state::Mode< ::CatalogBase> {
public:
    virtual ~CatalogBase();
    virtual void Mode_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12() = 0;
    virtual void VF13() = 0;
    virtual void VF14();
    virtual void VF15() = 0;
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
};

#endif  // ACNLWA_CATALOGBASE_H
