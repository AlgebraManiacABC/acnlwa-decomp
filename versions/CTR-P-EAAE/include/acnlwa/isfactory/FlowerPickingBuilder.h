#ifndef ACNLWA_ISFACTORY_FLOWERPICKINGBUILDER_H
#define ACNLWA_ISFACTORY_FLOWERPICKINGBUILDER_H

#include "acnlwa/isfactory/PeninsulaBuilder.h"

namespace isfactory {

class FlowerPickingBuilder : public ::isfactory::PeninsulaBuilder {
public:
    virtual ~FlowerPickingBuilder();
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

}  // namespace isfactory

#endif  // ACNLWA_ISFACTORY_FLOWERPICKINGBUILDER_H
