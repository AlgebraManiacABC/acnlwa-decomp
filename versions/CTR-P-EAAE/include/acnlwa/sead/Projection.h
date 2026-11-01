#ifndef ACNLWA_SEAD_PROJECTION_H
#define ACNLWA_SEAD_PROJECTION_H

namespace sead {

class Projection {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~Projection();
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06();
    virtual void VF07() = 0;
};

}  // namespace sead

#endif  // ACNLWA_SEAD_PROJECTION_H
