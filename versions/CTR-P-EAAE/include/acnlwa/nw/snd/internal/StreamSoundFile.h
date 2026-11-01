#ifndef ACNLWA_NW_SND_INTERNAL_STREAMSOUNDFILE_H
#define ACNLWA_NW_SND_INTERNAL_STREAMSOUNDFILE_H

namespace nw {
namespace snd {
namespace internal {

class StreamSoundFile {
public:
    struct ChannelInfo {
        int GetDspAdpcmChannelInfo() const;
    };
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_STREAMSOUNDFILE_H
