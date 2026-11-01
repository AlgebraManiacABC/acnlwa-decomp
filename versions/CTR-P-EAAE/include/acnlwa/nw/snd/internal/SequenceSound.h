#ifndef ACNLWA_NW_SND_INTERNAL_SEQUENCESOUND_H
#define ACNLWA_NW_SND_INTERNAL_SEQUENCESOUND_H

#include "acnlwa/nw/snd/internal/BasicSound.h"

namespace nw {
namespace snd {
namespace internal {

class SequenceSound : public ::nw::snd::internal::BasicSound {
public:
    virtual void VF00();
    virtual ~SequenceSound();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF11();
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_SEQUENCESOUND_H
