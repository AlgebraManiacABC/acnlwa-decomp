#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_SEQUENCESOUNDLOADER_DATALOADTASK_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_SEQUENCESOUNDLOADER_DATALOADTASK_H

#include "acnlwa/nw/snd/internal/Task.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {
namespace SequenceSoundLoader {

class DataLoadTask : public ::nw::snd::internal::Task {
public:
    virtual ~DataLoadTask();
    virtual void VF02();
};

}  // namespace SequenceSoundLoader
}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_SEQUENCESOUNDLOADER_DATALOADTASK_H
