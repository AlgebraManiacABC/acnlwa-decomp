#ifndef ACNLWA_ISFACTORY_MAZEBUILDER_H
#define ACNLWA_ISFACTORY_MAZEBUILDER_H

#include "acnlwa/isfactory/BasicBuilder.h"

namespace isfactory {

class MazeBuilder : public ::isfactory::BasicBuilder {
public:
    virtual ~MazeBuilder();
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

#endif  // ACNLWA_ISFACTORY_MAZEBUILDER_H
