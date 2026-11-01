#ifndef ACNLWA_SEAD_IDELEGATER_H
#define ACNLWA_SEAD_IDELEGATER_H

namespace sead {

template <typename T0>
class IDelegateR {
public:
    virtual ~IDelegateR();
};

template <typename T0>
IDelegateR<T0>::~IDelegateR() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_IDELEGATER_H
