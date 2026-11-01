#ifndef ACNLWA_SOUNDDOUBUTSUGOMGR_H
#define ACNLWA_SOUNDDOUBUTSUGOMGR_H

#include "acnlwa/sead/AudioSubsetBase.h"

class SoundDoubutsugoMgr : public ::sead::AudioSubsetBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual ~SoundDoubutsugoMgr();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
};

#endif  // ACNLWA_SOUNDDOUBUTSUGOMGR_H
