#ifndef ACNLWA_NW_SND_INTERNAL_SOUNDARCHIVEFILE_H
#define ACNLWA_NW_SND_INTERNAL_SOUNDARCHIVEFILE_H

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
