#ifndef ACNLWA_BKUNITSEARCHCANDCB_H
#define ACNLWA_BKUNITSEARCHCANDCB_H

#include "acnlwa/SearchCandXZ.h"

class BkUnitSearchCandCb : public ::SearchCandXZ<16,16> {
public:
    virtual void VF01();
};

#endif  // ACNLWA_BKUNITSEARCHCANDCB_H
