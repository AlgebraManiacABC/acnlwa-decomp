#ifndef ACNLWA_BOOKPARAMETERACCESS_H
#define ACNLWA_BOOKPARAMETERACCESS_H

#include "acnlwa/sead/hostio/Node.h"

class BookParameterAccess : public ::sead::hostio::Node {
public:
    virtual void VF00();
    virtual ~BookParameterAccess();
};

#endif  // ACNLWA_BOOKPARAMETERACCESS_H
