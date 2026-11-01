#ifndef ACNLWA_SOUNDOBJ_H
#define ACNLWA_SOUNDOBJ_H

#include "acnlwa/SoundObjBase.h"

template <int T0>
class SoundObj : public ::SoundObjBase {
public:
    virtual ~SoundObj();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
};

template <int T0>
SoundObj<T0>::~SoundObj() {}

template <int T0>
void SoundObj<T0>::VF03() {}

template <int T0>
void SoundObj<T0>::VF04() {}

template <int T0>
void SoundObj<T0>::VF05() {}

template <int T0>
void SoundObj<T0>::VF07() {}

template <int T0>
void SoundObj<T0>::VF08() {}

template <int T0>
void SoundObj<T0>::VF09() {}

template <int T0>
void SoundObj<T0>::VF10() {}

template <int T0>
void SoundObj<T0>::VF11() {}

template <int T0>
void SoundObj<T0>::VF12() {}

template <int T0>
void SoundObj<T0>::VF13() {}


#endif  // ACNLWA_SOUNDOBJ_H
