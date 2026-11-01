#ifndef ACNLWA_SEAD_AUDIORESETTERCTR_H
#define ACNLWA_SEAD_AUDIORESETTERCTR_H

#include "acnlwa/sead/AudioResetter.h"

namespace sead {

class AudioResetterCtr : public ::sead::AudioResetter {
public:
    virtual ~AudioResetterCtr();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIORESETTERCTR_H
