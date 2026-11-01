#ifndef ACNLWA_CATALOGLIST_H
#define ACNLWA_CATALOGLIST_H

#include "acnlwa/InstCatalog.h"

class CatalogList : public ::InstCatalog<8> {
public:
    virtual ~CatalogList();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF17();
    virtual void VF19();
    virtual void VF21();
    virtual void VF24();
};

#endif  // ACNLWA_CATALOGLIST_H
