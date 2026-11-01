#ifndef ACNLWA_SOUNDDJPLAYER_H
#define ACNLWA_SOUNDDJPLAYER_H

#include "acnlwa/SoundIHaniwaControl.h"
#include "acnlwa/sead/IDisposer.h"

class SoundDJPlayer : public ::SoundIHaniwaControl {
public:
    class SingletonDisposer_ : public ::sead::IDisposer {
    public:
        virtual ~SingletonDisposer_();
    };

    virtual ~SoundDJPlayer();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

#endif  // ACNLWA_SOUNDDJPLAYER_H
