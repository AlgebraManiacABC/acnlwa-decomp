#ifndef ACNLWA_NW_SND_SOUNDDATAMANAGER_H
#define ACNLWA_NW_SND_SOUNDDATAMANAGER_H

#include "acnlwa/nw/snd/internal/driver/DisposeCallback.h"
#include "acnlwa/nw/snd/internal/SoundArchiveLoader.h"

namespace nw {
namespace snd {

class SoundDataManager : public ::nw::snd::internal::driver::DisposeCallback, public ::nw::snd::internal::SoundArchiveLoader {
public:
    virtual ~SoundDataManager();
    virtual void DisposeCallback_VF02();
    virtual void SoundDataManager_VF03();
    virtual void SoundDataManager_VF04();
    virtual void VF05();
};

}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_SOUNDDATAMANAGER_H
