#ifndef ACNLWA_NW_SND_INTERNAL_PLAYERHEAPDATAMANAGER_H
#define ACNLWA_NW_SND_INTERNAL_PLAYERHEAPDATAMANAGER_H

#include "acnlwa/nw/snd/internal/driver/DisposeCallback.h"
#include "acnlwa/nw/snd/internal/SoundArchiveLoader.h"

namespace nw {
namespace snd {
namespace internal {

class PlayerHeapDataManager : public ::nw::snd::internal::driver::DisposeCallback, public ::nw::snd::internal::SoundArchiveLoader {
public:
    virtual ~PlayerHeapDataManager();
    virtual void DisposeCallback_VF02();
    virtual void PlayerHeapDataManager_VF03();
    virtual void PlayerHeapDataManager_VF04();
    virtual void VF05();
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_PLAYERHEAPDATAMANAGER_H
