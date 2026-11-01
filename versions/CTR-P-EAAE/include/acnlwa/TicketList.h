#ifndef ACNLWA_TICKETLIST_H
#define ACNLWA_TICKETLIST_H

#include "acnlwa/InstSelect.h"

class TicketList : public ::InstSelect<8> {
public:
    virtual ~TicketList();
    virtual void VF03();
    virtual void VF08();
    virtual void VF10();
    virtual void VF11();
    virtual void VF13();
    virtual void VF24();
    virtual void VF25();
};

#endif  // ACNLWA_TICKETLIST_H
