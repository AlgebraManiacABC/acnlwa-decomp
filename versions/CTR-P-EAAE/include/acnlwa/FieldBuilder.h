#ifndef ACNLWA_FIELDBUILDER_H
#define ACNLWA_FIELDBUILDER_H

class FieldBuilder {
public:
    virtual ~FieldBuilder();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10() = 0;
};

#endif  // ACNLWA_FIELDBUILDER_H
