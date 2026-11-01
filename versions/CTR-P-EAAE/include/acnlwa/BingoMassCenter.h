#ifndef ACNLWA_BINGOMASSCENTER_H
#define ACNLWA_BINGOMASSCENTER_H

#include "acnlwa/BingoMassBase.h"

class BingoMassCenter : public ::BingoMassBase {
public:
    virtual ~BingoMassCenter();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

#endif  // ACNLWA_BINGOMASSCENTER_H
