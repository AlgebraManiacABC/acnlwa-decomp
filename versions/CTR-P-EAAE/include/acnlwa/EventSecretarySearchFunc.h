#ifndef ACNLWA_EVENTSECRETARYSEARCHFUNC_H
#define ACNLWA_EVENTSECRETARYSEARCHFUNC_H

#include "acnlwa/BsNpcMgr.h"

class EventSecretarySearchFunc : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

#endif  // ACNLWA_EVENTSECRETARYSEARCHFUNC_H
