#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_STREAMSOUNDPLAYER_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_STREAMSOUNDPLAYER_H

#include "acnlwa/nw/snd/internal/driver/BasicSoundPlayer.h"
#include "acnlwa/nw/snd/internal/driver/SoundThread/PlayerCallback.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

class StreamSoundPlayer : public ::nw::snd::internal::driver::BasicSoundPlayer, public ::nw::snd::internal::driver::SoundThread::PlayerCallback {
public:
    virtual ~StreamSoundPlayer();
    virtual void BasicSoundPlayer_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_STREAMSOUNDPLAYER_H
