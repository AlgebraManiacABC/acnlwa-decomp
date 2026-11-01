#ifndef ACNLWA_DONATIONBOXTALKRECEPT_H
#define ACNLWA_DONATIONBOXTALKRECEPT_H

#include "acnlwa/ObjTalkRecept.h"

class DonationBoxTalkRecept : public ::ObjTalkRecept {
public:
    virtual ~DonationBoxTalkRecept();
    virtual void ITalkRecept_VF62(unsigned char *);
    virtual void ObjTalkRecept_VF64();
    virtual void ObjTalkRecept_VF65();
    virtual void ObjTalkRecept_VF66();
    virtual void VF67();
    virtual void VF68();
};

#endif  // ACNLWA_DONATIONBOXTALKRECEPT_H
