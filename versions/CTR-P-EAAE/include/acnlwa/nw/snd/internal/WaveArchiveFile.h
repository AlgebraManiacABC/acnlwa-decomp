#ifndef ACNLWA_NW_SND_INTERNAL_WAVEARCHIVEFILE_H
#define ACNLWA_NW_SND_INTERNAL_WAVEARCHIVEFILE_H

#include "types.h"

namespace nw {
namespace snd {
namespace internal {

class WaveArchiveFile {
public:
    struct FileHeader {
        int GetInfoBlock() const;
        undefined4 GetInfoBlockOffset() const;
    };
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_WAVEARCHIVEFILE_H
