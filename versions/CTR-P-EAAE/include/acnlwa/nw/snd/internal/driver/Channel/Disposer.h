#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_CHANNEL_DISPOSER_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_CHANNEL_DISPOSER_H

#include "acnlwa/nw/snd/internal/driver/DisposeCallback.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {
namespace Channel {

class Disposer : public ::nw::snd::internal::driver::DisposeCallback {
public:
    virtual ~Disposer();
    virtual void DisposeCallback_VF02();
};

}  // namespace Channel
}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_CHANNEL_DISPOSER_H
