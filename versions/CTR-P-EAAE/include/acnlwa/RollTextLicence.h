#ifndef ACNLWA_ROLLTEXTLICENCE_H
#define ACNLWA_ROLLTEXTLICENCE_H

#include "acnlwa/state/Mode.h"

class RollTextLicence : public ::state::Mode< ::RollTextLicence> {
public:
    virtual ~RollTextLicence();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_ROLLTEXTLICENCE_H
