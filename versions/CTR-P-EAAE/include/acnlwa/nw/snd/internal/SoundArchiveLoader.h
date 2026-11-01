#ifndef ACNLWA_NW_SND_INTERNAL_SOUNDARCHIVELOADER_H
#define ACNLWA_NW_SND_INTERNAL_SOUNDARCHIVELOADER_H

namespace nw {
namespace snd {
namespace internal {

class SoundArchiveLoader {
public:
    virtual ~SoundArchiveLoader();
    virtual void SoundArchiveLoader_VF02() = 0;
    virtual void SoundArchiveLoader_VF03() = 0;
    virtual void SoundArchiveLoader_VF04() = 0;
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_SOUNDARCHIVELOADER_H
