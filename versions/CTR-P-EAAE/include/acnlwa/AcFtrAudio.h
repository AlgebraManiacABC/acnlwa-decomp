#ifndef ACNLWA_ACFTRAUDIO_H
#define ACNLWA_ACFTRAUDIO_H

#include "acnlwa/AcFtr.h"

class AcFtrAudio : public ::AcFtr {
public:
    virtual ~AcFtrAudio();
    virtual unsigned int DemoActor_VF20();
    virtual void AcFtr_VF37();
    virtual unsigned int AcFtr_VF38(unsigned int, unsigned int, unsigned int);
    virtual unsigned int AcFtr_VF39();
    virtual void AcFtr_VF44();
    virtual void AcFtr_VF45();
    virtual void AcFtr_VF46();
    virtual void AcFtr_VF47();
    virtual void AcFtr_VF48();
};

#endif  // ACNLWA_ACFTRAUDIO_H
