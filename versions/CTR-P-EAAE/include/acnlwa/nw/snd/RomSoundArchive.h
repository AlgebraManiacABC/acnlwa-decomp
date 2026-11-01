#ifndef ACNLWA_NW_SND_ROMSOUNDARCHIVE_H
#define ACNLWA_NW_SND_ROMSOUNDARCHIVE_H

#include "acnlwa/nw/snd/internal/FsSoundArchiveBase.h"

namespace nw {
namespace snd {

class RomSoundArchive : public ::nw::snd::internal::FsSoundArchiveBase {
public:
    virtual ~RomSoundArchive();
};

}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_ROMSOUNDARCHIVE_H
