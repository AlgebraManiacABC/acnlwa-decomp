#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_MMLSEQUENCETRACK_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_MMLSEQUENCETRACK_H

#include "acnlwa/nw/snd/internal/driver/SequenceTrack.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

class MmlSequenceTrack : public ::nw::snd::internal::driver::SequenceTrack {
public:
    virtual ~MmlSequenceTrack();
    virtual void VF02();
};

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_MMLSEQUENCETRACK_H
