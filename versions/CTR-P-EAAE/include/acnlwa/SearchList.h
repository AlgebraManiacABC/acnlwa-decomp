#ifndef ACNLWA_SEARCHLIST_H
#define ACNLWA_SEARCHLIST_H

#include "acnlwa/InstSelect.h"

class SearchList : public ::InstSelect<8> {
public:
    virtual ~SearchList();
    virtual void VF03();
    virtual void VF08();
    virtual void VF13();
    virtual void VF25();
};

#endif  // ACNLWA_SEARCHLIST_H
