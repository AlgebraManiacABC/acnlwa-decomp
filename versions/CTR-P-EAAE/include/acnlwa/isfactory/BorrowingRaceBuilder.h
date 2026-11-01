#ifndef ACNLWA_ISFACTORY_BORROWINGRACEBUILDER_H
#define ACNLWA_ISFACTORY_BORROWINGRACEBUILDER_H

#include "acnlwa/isfactory/VillageBuilder.h"

namespace isfactory {

class BorrowingRaceBuilder : public ::isfactory::VillageBuilder {
public:
    virtual ~BorrowingRaceBuilder();
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

#endif  // ACNLWA_ISFACTORY_BORROWINGRACEBUILDER_H
