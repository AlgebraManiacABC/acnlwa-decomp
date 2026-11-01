#ifndef ACNLWA_ACFTRCHAIR_H
#define ACNLWA_ACFTRCHAIR_H

#include "acnlwa/AcFtr.h"

class AcFtrChair : public ::AcFtr {
public:
    virtual ~AcFtrChair();
    virtual void AcFtr_VF44();
    virtual void AcFtr_VF46();
    virtual void AcFtr_VF62();
};

#endif  // ACNLWA_ACFTRCHAIR_H
