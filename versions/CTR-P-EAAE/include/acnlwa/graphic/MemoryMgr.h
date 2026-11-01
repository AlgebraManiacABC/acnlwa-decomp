#ifndef ACNLWA_GRAPHIC_MEMORYMGR_H
#define ACNLWA_GRAPHIC_MEMORYMGR_H

#include "acnlwa/sead/GfxMemoryMgrCtr.h"

namespace graphic {

class MemoryMgr : public ::sead::GfxMemoryMgrCtr {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual ~MemoryMgr();
};

}  // namespace graphic

#endif  // ACNLWA_GRAPHIC_MEMORYMGR_H
