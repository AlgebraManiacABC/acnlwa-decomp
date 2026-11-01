#ifndef ACNLWA_BSMENUINPUTCOMMENT_H
#define ACNLWA_BSMENUINPUTCOMMENT_H

#include "acnlwa/MenuBase.h"

class BsMenuInputComment : public ::MenuBase {
public:
    virtual ~BsMenuInputComment();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
};

#endif  // ACNLWA_BSMENUINPUTCOMMENT_H
