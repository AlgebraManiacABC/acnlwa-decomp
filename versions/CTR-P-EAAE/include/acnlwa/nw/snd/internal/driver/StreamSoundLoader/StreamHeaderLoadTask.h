#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_STREAMSOUNDLOADER_STREAMHEADERLOADTASK_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_STREAMSOUNDLOADER_STREAMHEADERLOADTASK_H

#include "acnlwa/nw/snd/internal/Task.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {
namespace StreamSoundLoader {

class StreamHeaderLoadTask : public ::nw::snd::internal::Task {
public:
    virtual ~StreamHeaderLoadTask();
    virtual void VF02();
};

}  // namespace StreamSoundLoader
}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_STREAMSOUNDLOADER_STREAMHEADERLOADTASK_H
