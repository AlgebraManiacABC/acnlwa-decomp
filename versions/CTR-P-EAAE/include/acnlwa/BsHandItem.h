#ifndef ACNLWA_BSHANDITEM_H
#define ACNLWA_BSHANDITEM_H

#include "acnlwa/Base.h"

class BsHandItem : public ::Base {
public:
    virtual ~BsHandItem();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSHANDITEM_H
