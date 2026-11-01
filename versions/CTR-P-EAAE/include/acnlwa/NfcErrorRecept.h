#ifndef ACNLWA_NFCERRORRECEPT_H
#define ACNLWA_NFCERRORRECEPT_H

#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/script/IFlowRecept.h"

class NfcErrorRecept : private ::script::ITalkRecept, private ::script::IFlowRecept {
public:
    virtual ~NfcErrorRecept();
    virtual void VF63();
    virtual void VF64();
    virtual void VF65();
    virtual void VF66();
};

#endif  // ACNLWA_NFCERRORRECEPT_H
