#ifndef ACNLWA_SEAD_DEFAULTGFXMEMORYMGRCTR_H
#define ACNLWA_SEAD_DEFAULTGFXMEMORYMGRCTR_H

#include "acnlwa/sead/GfxMemoryMgrCtr.h"

namespace sead {

class DefaultGfxMemoryMgrCtr : public ::sead::GfxMemoryMgrCtr {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual ~DefaultGfxMemoryMgrCtr();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_DEFAULTGFXMEMORYMGRCTR_H
