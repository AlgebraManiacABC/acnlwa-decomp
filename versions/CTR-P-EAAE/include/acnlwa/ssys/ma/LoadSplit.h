#ifndef ACNLWA_SSYS_MA_LOADSPLIT_H
#define ACNLWA_SSYS_MA_LOADSPLIT_H

#include "acnlwa/ssys/st/ListNode.h"

namespace ssys {
namespace ma {

class LoadSplit : private ::ssys::st::ListNode {
public:
    virtual ~LoadSplit();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_LOADSPLIT_H
