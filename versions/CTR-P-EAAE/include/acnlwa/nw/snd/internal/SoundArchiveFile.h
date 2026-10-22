#ifndef ACNLWA_NW_SND_INTERNAL_SOUNDARCHIVEFILE_H
#define ACNLWA_NW_SND_INTERNAL_SOUNDARCHIVEFILE_H

// Written by hand: this class has no RTTI, so it is not part of the
// generated scaffold. Only the members used so far are declared.

#include "types.h"

namespace nw {
namespace snd {
namespace internal {

class SoundArchiveFile {
public:
    struct FileHeader {
        undefined4 GetStringBlockSize() const;
        undefined4 GetStringBlockOffset() const;
    };
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_SOUNDARCHIVEFILE_H
