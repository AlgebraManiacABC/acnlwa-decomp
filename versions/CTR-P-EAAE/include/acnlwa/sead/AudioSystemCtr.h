#ifndef ACNLWA_SEAD_AUDIOSYSTEMCTR_H
#define ACNLWA_SEAD_AUDIOSYSTEMCTR_H

#include "acnlwa/sead/AudioSystem.h"
#include "acnlwa/sead/hostio/Node.h"

namespace sead {

class AudioSystemCtr : public ::sead::AudioSystem, public ::sead::hostio::Node {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~AudioSystemCtr();
    virtual void VF04();
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
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOSYSTEMCTR_H
