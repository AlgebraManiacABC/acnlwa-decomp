#ifndef ACNLWA_ACOBJECTBASE_H
#define ACNLWA_ACOBJECTBASE_H

#include "acnlwa/Actor.h"
#include "acnlwa/ObjectResource.h"

class AcObjectBase : public ::Actor, virtual public ::ObjectResource {
public:
    virtual ~AcObjectBase();
};

#endif  // ACNLWA_ACOBJECTBASE_H
