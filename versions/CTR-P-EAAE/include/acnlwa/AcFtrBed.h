#ifndef ACNLWA_ACFTRBED_H
#define ACNLWA_ACFTRBED_H

#include "acnlwa/AcFtr.h"

class AcFtrBed : public ::AcFtr {
public:
    virtual ~AcFtrBed();
    virtual void AcFtr_VF44();
    virtual void AcFtr_VF46();
    virtual void AcFtr_VF62();
};

#endif  // ACNLWA_ACFTRBED_H
