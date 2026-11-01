#ifndef ACNLWA_LOBBYISLANDBOOK_H
#define ACNLWA_LOBBYISLANDBOOK_H

#include "acnlwa/AddressBook.h"

class LobbyIslandBook : public ::AddressBook {
public:
    virtual ~LobbyIslandBook();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

#endif  // ACNLWA_LOBBYISLANDBOOK_H
