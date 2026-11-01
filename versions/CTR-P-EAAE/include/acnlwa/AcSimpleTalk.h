#ifndef ACNLWA_ACSIMPLETALK_H
#define ACNLWA_ACSIMPLETALK_H

#include "acnlwa/AcSimpleTalkBase.h"

template <typename T0>
class AcSimpleTalk : public ::AcSimpleTalkBase {
public:
    virtual ~AcSimpleTalk();
    virtual void VF36();
};

template <typename T0>
AcSimpleTalk<T0>::~AcSimpleTalk() {}

template <typename T0>
void AcSimpleTalk<T0>::VF36() {}


#endif  // ACNLWA_ACSIMPLETALK_H
