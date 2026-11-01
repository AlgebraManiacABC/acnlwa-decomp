#ifndef ACNLWA_SSYS_MA_VRAMMEMBLOCK_H
#define ACNLWA_SSYS_MA_VRAMMEMBLOCK_H

#include "acnlwa/ssys/st/ListNodePriorityBase.h"

namespace ssys {
namespace ma {

class VramMemBlock : public ::ssys::st::ListNodePriorityBase {
public:
    virtual ~VramMemBlock();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_VRAMMEMBLOCK_H
