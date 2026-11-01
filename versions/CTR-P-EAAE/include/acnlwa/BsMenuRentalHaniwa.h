#ifndef ACNLWA_BSMENURENTALHANIWA_H
#define ACNLWA_BSMENURENTALHANIWA_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuRentalHaniwa : public ::MenuBase, public ::state::Mode< ::BsMenuRentalHaniwa> {
public:
    virtual ~BsMenuRentalHaniwa();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENURENTALHANIWA_H
