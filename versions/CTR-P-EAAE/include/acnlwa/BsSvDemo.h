#ifndef ACNLWA_BSSVDEMO_H
#define ACNLWA_BSSVDEMO_H

#include "acnlwa/Base.h"
#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/state/Mode.h"

class BsSvDemo : public ::Base, public ::script::ITalkRecept, public ::state::Mode< ::BsSvDemo> {
public:
    virtual ~BsSvDemo();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void BsSvDemo_VF16();
    virtual void BsSvDemo_VF17();
};

#endif  // ACNLWA_BSSVDEMO_H
