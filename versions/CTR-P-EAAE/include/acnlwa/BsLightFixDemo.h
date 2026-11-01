#ifndef ACNLWA_BSLIGHTFIXDEMO_H
#define ACNLWA_BSLIGHTFIXDEMO_H

#include "acnlwa/BsLightFixParam.h"

class BsLightFixDemo : public ::BsLightFixParam {
public:
    virtual ~BsLightFixDemo();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual void VF18();
};

#endif  // ACNLWA_BSLIGHTFIXDEMO_H
