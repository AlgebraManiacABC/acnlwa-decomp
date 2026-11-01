#ifndef ACNLWA_ISHUTFACT2_BASICBUILDER_H
#define ACNLWA_ISHUTFACT2_BASICBUILDER_H

#include "acnlwa/FieldBuilder.h"

namespace ishutfact2 {

class BasicBuilder : public ::FieldBuilder {
public:
    virtual ~BasicBuilder();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

}  // namespace ishutfact2

#endif  // ACNLWA_ISHUTFACT2_BASICBUILDER_H
