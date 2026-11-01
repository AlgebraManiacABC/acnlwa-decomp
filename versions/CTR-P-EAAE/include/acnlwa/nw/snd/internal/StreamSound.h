#ifndef ACNLWA_NW_SND_INTERNAL_STREAMSOUND_H
#define ACNLWA_NW_SND_INTERNAL_STREAMSOUND_H

#include "acnlwa/nw/snd/internal/BasicSound.h"

namespace nw {
namespace snd {
namespace internal {

class StreamSound : public ::nw::snd::internal::BasicSound {
public:
    virtual void VF00();
    virtual ~StreamSound();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF12();
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_STREAMSOUND_H
