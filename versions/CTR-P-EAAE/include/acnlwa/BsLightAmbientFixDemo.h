#ifndef ACNLWA_BSLIGHTAMBIENTFIXDEMO_H
#define ACNLWA_BSLIGHTAMBIENTFIXDEMO_H

#include "acnlwa/BsLightAmbientFix.h"

class BsLightAmbientFixDemo : public ::BsLightAmbientFix {
public:
    virtual ~BsLightAmbientFixDemo();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual void VF18();
};

#endif  // ACNLWA_BSLIGHTAMBIENTFIXDEMO_H
