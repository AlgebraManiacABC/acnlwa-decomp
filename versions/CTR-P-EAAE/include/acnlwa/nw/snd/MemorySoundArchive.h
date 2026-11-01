#ifndef ACNLWA_NW_SND_MEMORYSOUNDARCHIVE_H
#define ACNLWA_NW_SND_MEMORYSOUNDARCHIVE_H

#include "acnlwa/nw/snd/SoundArchive.h"

namespace nw {
namespace snd {

class MemorySoundArchive : public ::nw::snd::SoundArchive {
public:
    virtual ~MemorySoundArchive();
    virtual void VF02();
    virtual void VF03();
    virtual void SoundArchive_VF04();
    virtual void SoundArchive_VF05();
};

}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_MEMORYSOUNDARCHIVE_H
