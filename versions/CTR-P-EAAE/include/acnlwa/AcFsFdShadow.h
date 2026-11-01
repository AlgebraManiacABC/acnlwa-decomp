#ifndef ACNLWA_ACFSFDSHADOW_H
#define ACNLWA_ACFSFDSHADOW_H

#include "acnlwa/AcFishFieldBase.h"
#include "acnlwa/ObjectState.h"

class AcFsFdShadow : public ::AcFishFieldBase, public ::ObjectState< ::AcFsFdShadow> {
public:
    virtual ~AcFsFdShadow();
    virtual void VF18();
    virtual void VF24();
    virtual void VF25();
    virtual void VF27();
    virtual void VF28();
    virtual void VF39();
    virtual void VF40();
    virtual void VF41();
    virtual void VF42();
    virtual void VF43();
    virtual void VF44();
    virtual void VF47();
    virtual void VF48();
    virtual void VF49();
};

#endif  // ACNLWA_ACFSFDSHADOW_H
