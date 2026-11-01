#ifndef ACNLWA_BSCAMERA_H
#define ACNLWA_BSCAMERA_H

#include "acnlwa/Base.h"

class BsCamera : public ::Base {
public:
    virtual ~BsCamera();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void Base_VF15();
};

#endif  // ACNLWA_BSCAMERA_H
