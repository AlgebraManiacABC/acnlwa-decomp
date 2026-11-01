#ifndef ACNLWA_LETTERLIST_H
#define ACNLWA_LETTERLIST_H

#include "acnlwa/InstSelect.h"

class LetterList : public ::InstSelect<8> {
public:
    virtual ~LetterList();
    virtual void VF08();
    virtual void VF13();
    virtual void VF25();
};

#endif  // ACNLWA_LETTERLIST_H
