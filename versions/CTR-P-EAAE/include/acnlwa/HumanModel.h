#ifndef ACNLWA_HUMANMODEL_H
#define ACNLWA_HUMANMODEL_H

class HumanModel {
public:
    class FaceCtrl {
    public:
    };

    virtual void VF00();
    virtual void VF01();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06();
    virtual ~HumanModel();
    virtual void VF09() = 0;
    virtual void VF10();
};

#endif  // ACNLWA_HUMANMODEL_H
