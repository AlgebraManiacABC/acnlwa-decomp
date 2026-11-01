#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_SEQUENCETRACK_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_SEQUENCETRACK_H

namespace nw {
namespace snd {
namespace internal {
namespace driver {

class SequenceTrack {
public:
    virtual ~SequenceTrack();
    virtual void VF02() = 0;

    int GetVariablePtr(int param_2);
};

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_SEQUENCETRACK_H
