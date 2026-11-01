#ifndef ACNLWA_SSYS_MA_VRAMHEAP_H
#define ACNLWA_SSYS_MA_VRAMHEAP_H

#include "acnlwa/sead/INamable.h"

namespace ssys {
namespace ma {

class VramHeap : public ::sead::INamable {
public:
    virtual void VF00() = 0;
    virtual void VF01() = 0;
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual ~VramHeap();
};

}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_VRAMHEAP_H
