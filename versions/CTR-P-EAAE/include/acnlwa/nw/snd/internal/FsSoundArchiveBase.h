#ifndef ACNLWA_NW_SND_INTERNAL_FSSOUNDARCHIVEBASE_H
#define ACNLWA_NW_SND_INTERNAL_FSSOUNDARCHIVEBASE_H

#include "acnlwa/nw/snd/SoundArchive.h"

namespace nw {
namespace snd {
namespace internal {

class FsSoundArchiveBase : public ::nw::snd::SoundArchive {
public:
    virtual ~FsSoundArchiveBase();
    virtual void VF02();
    virtual void VF03();
    virtual void SoundArchive_VF04();
    virtual void SoundArchive_VF05();
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_FSSOUNDARCHIVEBASE_H
