#ifndef ACNLWA_ACBROCHURE_H
#define ACNLWA_ACBROCHURE_H

#include "acnlwa/DemoActor.h"

class AcBrochure : public ::DemoActor {
public:
    virtual ~AcBrochure();
    virtual int Process_VF02();
    virtual void Process_VF04();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual unsigned char DemoActor_VF18();
};

#endif  // ACNLWA_ACBROCHURE_H
