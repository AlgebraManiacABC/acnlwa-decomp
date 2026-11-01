#ifndef ACNLWA_SOUNDFADER_H
#define ACNLWA_SOUNDFADER_H

class SoundFader {
public:
    virtual ~SoundFader();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDFADER_H
