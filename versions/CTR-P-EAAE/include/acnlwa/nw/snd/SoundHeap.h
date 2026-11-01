#ifndef ACNLWA_NW_SND_SOUNDHEAP_H
#define ACNLWA_NW_SND_SOUNDHEAP_H

#include "acnlwa/nw/snd/SoundMemoryAllocatable.h"

namespace nw {
namespace snd {

class SoundHeap : public ::nw::snd::SoundMemoryAllocatable {
public:
    virtual ~SoundHeap();
    virtual void VF02();
};

}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_SOUNDHEAP_H
