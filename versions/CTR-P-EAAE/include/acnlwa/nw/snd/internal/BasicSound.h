#ifndef ACNLWA_NW_SND_INTERNAL_BASICSOUND_H
#define ACNLWA_NW_SND_INTERNAL_BASICSOUND_H

namespace nw {
namespace snd {
namespace internal {

class BasicSound {
public:
    virtual void VF00();
    virtual ~BasicSound();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();

    bool IsAttachedGeneralHandle();
    bool IsAttachedTempGeneralHandle();
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_BASICSOUND_H
