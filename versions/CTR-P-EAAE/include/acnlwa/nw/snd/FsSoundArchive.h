#ifndef ACNLWA_NW_SND_FSSOUNDARCHIVE_H
#define ACNLWA_NW_SND_FSSOUNDARCHIVE_H

#include "acnlwa/nw/snd/internal/FsSoundArchiveBase.h"

namespace nw {
namespace snd {

class FsSoundArchive : public ::nw::snd::internal::FsSoundArchiveBase {
public:
    virtual ~FsSoundArchive();
};

}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_FSSOUNDARCHIVE_H
