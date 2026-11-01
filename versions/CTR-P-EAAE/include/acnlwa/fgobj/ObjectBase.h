#ifndef ACNLWA_FGOBJ_OBJECTBASE_H
#define ACNLWA_FGOBJ_OBJECTBASE_H

#include "acnlwa/ssys/st/ListNodePriorityBase.h"

namespace fgobj {

class ObjectBase : public ::ssys::st::ListNodePriorityBase {
public:
    virtual ~ObjectBase();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_OBJECTBASE_H
