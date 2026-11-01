#ifndef ACNLWA_COMTITLE_H
#define ACNLWA_COMTITLE_H

#include "acnlwa/state/Mode.h"

class ComTitle : public ::state::Mode< ::ComTitle> {
public:
    virtual ~ComTitle();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_COMTITLE_H
