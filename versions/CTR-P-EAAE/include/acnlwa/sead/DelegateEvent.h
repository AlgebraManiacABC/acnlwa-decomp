#ifndef ACNLWA_SEAD_DELEGATEEVENT_H
#define ACNLWA_SEAD_DELEGATEEVENT_H

#include "acnlwa/sead/IDisposer.h"

namespace sead {

template <typename T0>
class DelegateEvent {
public:
    class Slot : public ::sead::IDisposer {
    public:
        virtual ~Slot();
    };

    virtual ~DelegateEvent();
};

template <typename T0>
DelegateEvent<T0>::Slot::~Slot() {}

template <typename T0>
DelegateEvent<T0>::~DelegateEvent() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_DELEGATEEVENT_H
