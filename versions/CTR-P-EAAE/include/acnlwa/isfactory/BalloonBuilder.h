#ifndef ACNLWA_ISFACTORY_BALLOONBUILDER_H
#define ACNLWA_ISFACTORY_BALLOONBUILDER_H

#include "acnlwa/isfactory/PeninsulaBuilder.h"

namespace isfactory {

class BalloonBuilder : public ::isfactory::PeninsulaBuilder {
public:
    virtual ~BalloonBuilder();
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

#endif  // ACNLWA_ISFACTORY_BALLOONBUILDER_H
