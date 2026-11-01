#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_BASICSOUNDPLAYER_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_BASICSOUNDPLAYER_H

namespace nw {
namespace snd {
namespace internal {
namespace driver {

class BasicSoundPlayer {
public:
    virtual ~BasicSoundPlayer();
    virtual void BasicSoundPlayer_VF02();
    virtual void VF03();
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
};

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_BASICSOUNDPLAYER_H
