#ifndef ACNLWA_BSLIGHTDIFFUSECATALOG_H
#define ACNLWA_BSLIGHTDIFFUSECATALOG_H

#include "acnlwa/BsLightFixBase.h"

class BsLightDiffuseCatalog : public ::BsLightFixBase {
public:
    virtual ~BsLightDiffuseCatalog();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF18();
    virtual void VF20();
};

#endif  // ACNLWA_BSLIGHTDIFFUSECATALOG_H
