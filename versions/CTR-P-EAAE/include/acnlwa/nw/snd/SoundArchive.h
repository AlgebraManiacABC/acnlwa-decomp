#ifndef ACNLWA_NW_SND_SOUNDARCHIVE_H
#define ACNLWA_NW_SND_SOUNDARCHIVE_H

namespace nw {
namespace snd {

class SoundArchive {
public:
    virtual ~SoundArchive();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void SoundArchive_VF04() = 0;
    virtual void SoundArchive_VF05() = 0;

    bool IsAvailable() const;
};

}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_SOUNDARCHIVE_H
