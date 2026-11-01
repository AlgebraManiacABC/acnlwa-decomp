#ifndef ACNLWA_BSSCENE_H
#define ACNLWA_BSSCENE_H

#include "acnlwa/Base.h"

class BsScene : public ::Base {
public:
    virtual ~BsScene();
    virtual int Process_VF02();
    virtual void Process_VF04();
    virtual int Process_VF05();
    virtual void Process_VF07();
    virtual bool Process_VF08();
    virtual void Process_VF10();
    virtual int Process_VF11();
    virtual void Process_VF13();
    virtual void Base_VF15();
    virtual void VF16() = 0;
};

#endif  // ACNLWA_BSSCENE_H
