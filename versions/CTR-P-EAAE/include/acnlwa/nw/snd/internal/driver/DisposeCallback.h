#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_DISPOSECALLBACK_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_DISPOSECALLBACK_H

namespace nw {
namespace snd {
namespace internal {
namespace driver {

class DisposeCallback {
public:
    virtual ~DisposeCallback();
    virtual void DisposeCallback_VF02() = 0;
};

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_DISPOSECALLBACK_H
