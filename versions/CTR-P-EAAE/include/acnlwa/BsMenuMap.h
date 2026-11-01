#ifndef ACNLWA_BSMENUMAP_H
#define ACNLWA_BSMENUMAP_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsMenuMap : public ::Base, public ::state::Mode< ::BsMenuMap> {
public:
    virtual ~BsMenuMap();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUMAP_H
