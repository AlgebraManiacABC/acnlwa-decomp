#ifndef ACNLWA_ACHOMETICKETMACHINE_H
#define ACNLWA_ACHOMETICKETMACHINE_H

#include "acnlwa/UtlBase.h"
#include "acnlwa/DemoActor.h"
#include "acnlwa/ObjTalkRecept.h"

class AcHomeTicketMachine : public ::UtlBase< ::DemoActor>, public ::ObjTalkRecept {
public:
    virtual ~AcHomeTicketMachine();
};

#endif  // ACNLWA_ACHOMETICKETMACHINE_H
