#ifndef ACNLWA_PEAD_DELEGATEEVENT_H
#define ACNLWA_PEAD_DELEGATEEVENT_H

namespace pead {

template <typename T0>
class DelegateEvent {
public:
    virtual ~DelegateEvent();
};

template <typename T0>
DelegateEvent<T0>::~DelegateEvent() {}


}  // namespace pead

#endif  // ACNLWA_PEAD_DELEGATEEVENT_H
