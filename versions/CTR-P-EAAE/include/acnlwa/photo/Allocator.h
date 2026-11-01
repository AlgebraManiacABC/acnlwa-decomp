#ifndef ACNLWA_PHOTO_ALLOCATOR_H
#define ACNLWA_PHOTO_ALLOCATOR_H

#include "acnlwa/nn/fnd/IAllocator.h"

namespace photo {

class Allocator : public ::nn::fnd::IAllocator {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~Allocator();
};

}  // namespace photo

#endif  // ACNLWA_PHOTO_ALLOCATOR_H
