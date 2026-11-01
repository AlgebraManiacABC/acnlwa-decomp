#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_SEQUENCESOUNDPLAYER_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_SEQUENCESOUNDPLAYER_H

#include "acnlwa/nw/snd/internal/driver/BasicSoundPlayer.h"
#include "acnlwa/nw/snd/internal/driver/DisposeCallback.h"
#include "acnlwa/nw/snd/internal/driver/SoundThread/PlayerCallback.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

class SequenceSoundPlayer : public ::nw::snd::internal::driver::BasicSoundPlayer, public ::nw::snd::internal::driver::DisposeCallback, public ::nw::snd::internal::driver::SoundThread::PlayerCallback {
public:
    virtual ~SequenceSoundPlayer();
    virtual void BasicSoundPlayer_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_SEQUENCESOUNDPLAYER_H
