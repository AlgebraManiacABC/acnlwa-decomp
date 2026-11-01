#ifndef ACNLWA_SSYS_MA_VRAMEXPHEAP_H
#define ACNLWA_SSYS_MA_VRAMEXPHEAP_H

#include "acnlwa/ssys/ma/VramHeap.h"

namespace ssys {
namespace ma {

class VramExpHeap : public ::ssys::ma::VramHeap {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual ~VramExpHeap();
};

}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_VRAMEXPHEAP_H
