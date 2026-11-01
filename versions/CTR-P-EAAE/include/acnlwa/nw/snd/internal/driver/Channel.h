#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_CHANNEL_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_CHANNEL_H

namespace nw {
namespace snd {
namespace internal {
namespace driver {

class Channel {
public:
    ~Channel();
    void Release();
};

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_CHANNEL_H
