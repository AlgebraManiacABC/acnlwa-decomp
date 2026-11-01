#ifndef ACNLWA_BSMENUPASSPORTFORPHOTO_H
#define ACNLWA_BSMENUPASSPORTFORPHOTO_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuPassportForPhoto : public ::MenuBase, public ::state::Mode< ::BsMenuPassportForPhoto> {
public:
    virtual ~BsMenuPassportForPhoto();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUPASSPORTFORPHOTO_H
