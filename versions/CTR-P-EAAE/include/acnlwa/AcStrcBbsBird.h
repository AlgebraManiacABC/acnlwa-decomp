#ifndef ACNLWA_ACSTRCBBSBIRD_H
#define ACNLWA_ACSTRCBBSBIRD_H

#include "acnlwa/UtlBase.h"
#include "acnlwa/AcStrc.h"
#include "acnlwa/bgcheck/MoveBg.h"

class AcStrcBbsBird : public ::UtlBase< ::AcStrc>, public ::bgcheck::MoveBg {
public:
    virtual ~AcStrcBbsBird();
};

#endif  // ACNLWA_ACSTRCBBSBIRD_H
