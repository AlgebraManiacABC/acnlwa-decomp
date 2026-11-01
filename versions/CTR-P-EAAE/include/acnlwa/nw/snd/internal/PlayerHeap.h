#ifndef ACNLWA_NW_SND_INTERNAL_PLAYERHEAP_H
#define ACNLWA_NW_SND_INTERNAL_PLAYERHEAP_H

#include "acnlwa/nw/snd/SoundMemoryAllocatable.h"

namespace nw {
namespace snd {
namespace internal {

class PlayerHeap : public ::nw::snd::SoundMemoryAllocatable {
public:
    virtual ~PlayerHeap();
    virtual void VF02();
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_PLAYERHEAP_H
