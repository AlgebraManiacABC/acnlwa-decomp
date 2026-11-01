#ifndef ACNLWA_EMOTICONACTIONEX_H
#define ACNLWA_EMOTICONACTIONEX_H

#include "acnlwa/EmoticonAction.h"

template <typename T0>
class EmoticonActionEx : public ::EmoticonAction {
public:
    virtual void VF00();
    virtual void VF01();
};

template <typename T0>
void EmoticonActionEx<T0>::VF00() {}

template <typename T0>
void EmoticonActionEx<T0>::VF01() {}


#endif  // ACNLWA_EMOTICONACTIONEX_H
