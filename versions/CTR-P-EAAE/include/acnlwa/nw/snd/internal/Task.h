#ifndef ACNLWA_NW_SND_INTERNAL_TASK_H
#define ACNLWA_NW_SND_INTERNAL_TASK_H

namespace nw {
namespace snd {
namespace internal {

class Task {
public:
    virtual ~Task();
    virtual void VF02() = 0;
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_TASK_H
