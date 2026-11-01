#ifndef ACNLWA_SSYS_MA_ALLOCATOR_H
#define ACNLWA_SSYS_MA_ALLOCATOR_H

#include "acnlwa/nw/os/IAllocator.h"

namespace ssys {
namespace ma {

class Allocator : public ::nw::os::IAllocator {
public:
    virtual ~Allocator();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_ALLOCATOR_H
