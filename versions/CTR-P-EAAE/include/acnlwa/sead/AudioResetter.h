#ifndef ACNLWA_SEAD_AUDIORESETTER_H
#define ACNLWA_SEAD_AUDIORESETTER_H

namespace sead {

class AudioResetter {
public:
    virtual ~AudioResetter();
    virtual void VF02();
    virtual void VF03() = 0;
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIORESETTER_H
