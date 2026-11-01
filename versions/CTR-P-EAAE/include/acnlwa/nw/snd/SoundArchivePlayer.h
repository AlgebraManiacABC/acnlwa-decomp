#ifndef ACNLWA_NW_SND_SOUNDARCHIVEPLAYER_H
#define ACNLWA_NW_SND_SOUNDARCHIVEPLAYER_H

#include "acnlwa/nw/snd/SoundStartable.h"
#include "acnlwa/nw/snd/internal/driver/NoteOnCallback.h"

namespace nw {
namespace snd {

class SoundArchivePlayer : public ::nw::snd::SoundStartable {
public:
    class SequenceNoteOnCallback : public ::nw::snd::internal::driver::NoteOnCallback {
    public:
        virtual ~SequenceNoteOnCallback();
        virtual void VF02();
    };

    virtual ~SoundArchivePlayer();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_SOUNDARCHIVEPLAYER_H
