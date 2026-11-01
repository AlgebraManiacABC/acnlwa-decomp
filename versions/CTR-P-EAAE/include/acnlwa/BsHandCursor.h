#ifndef ACNLWA_BSHANDCURSOR_H
#define ACNLWA_BSHANDCURSOR_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsHandCursor : public ::Base, public ::state::Mode< ::BsHandCursor> {
public:
    virtual ~BsHandCursor();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSHANDCURSOR_H
