#ifndef ACNLWA_BOOKICONBASE_H
#define ACNLWA_BOOKICONBASE_H

#include "acnlwa/state/Mode.h"

class BookIconBase : public ::state::Mode< ::BookIconBase> {
public:
    virtual ~BookIconBase();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_BOOKICONBASE_H
