#ifndef ACNLWA_SSYS_MA_HEAPALLOCATOR_H
#define ACNLWA_SSYS_MA_HEAPALLOCATOR_H

#include "acnlwa/ssys/ma/Allocator.h"

namespace ssys {
namespace ma {

class HeapAllocator : public ::ssys::ma::Allocator {
public:
    virtual ~HeapAllocator();
};

}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_HEAPALLOCATOR_H
