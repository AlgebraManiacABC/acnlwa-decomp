#ifndef ACNLWA_SEAD_FRAMEWORK_H
#define ACNLWA_SEAD_FRAMEWORK_H

namespace sead {

class Framework {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~Framework();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06() = 0;
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12() = 0;
    virtual void VF13();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_FRAMEWORK_H
