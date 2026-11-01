#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_MMLSEQUENCETRACKALLOCATOR_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_MMLSEQUENCETRACKALLOCATOR_H

#include "acnlwa/nw/snd/internal/driver/SequenceTrackAllocator.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

class MmlSequenceTrackAllocator : public ::nw::snd::internal::driver::SequenceTrackAllocator {
public:
    virtual ~MmlSequenceTrackAllocator();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_MMLSEQUENCETRACKALLOCATOR_H
