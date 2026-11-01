#ifndef ACNLWA_BSMENUEXPLAINPLATE_H
#define ACNLWA_BSMENUEXPLAINPLATE_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/state/Mode.h"

class BsMenuExplainPlate : public ::MenuBase, public ::script::ITalkRecept, public ::state::Mode< ::BsMenuExplainPlate> {
public:
    virtual ~BsMenuExplainPlate();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void BsMenuExplainPlate_VF25();
};

#endif  // ACNLWA_BSMENUEXPLAINPLATE_H
