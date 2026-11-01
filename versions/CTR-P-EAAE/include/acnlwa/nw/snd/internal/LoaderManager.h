#ifndef ACNLWA_NW_SND_INTERNAL_LOADERMANAGER_H
#define ACNLWA_NW_SND_INTERNAL_LOADERMANAGER_H

#include "acnlwa/nw/snd/internal/driver/SoundThread/SoundFrameCallback.h"

namespace nw {
namespace snd {
namespace internal {

template <typename T0>
class LoaderManager : public ::nw::snd::internal::driver::SoundThread::SoundFrameCallback {
public:
    virtual ~LoaderManager();
    virtual void VF02();
    virtual void VF03();
};

template <typename T0>
LoaderManager<T0>::~LoaderManager() {}

template <typename T0>
void LoaderManager<T0>::VF02() {}

template <typename T0>
void LoaderManager<T0>::VF03() {}


}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_LOADERMANAGER_H
