#ifndef ACNLWA_BSMENUMODELHOMEBOARD_H
#define ACNLWA_BSMENUMODELHOMEBOARD_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuModelHomeBoard : public ::MenuBase, public ::state::Mode< ::BsMenuModelHomeBoard> {
public:
    virtual ~BsMenuModelHomeBoard();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUMODELHOMEBOARD_H
