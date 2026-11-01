#ifndef ACNLWA_BSCFL_H
#define ACNLWA_BSCFL_H

#include "acnlwa/Base.h"

class BsCfl : public ::Base {
public:
    virtual ~BsCfl();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSCFL_H
