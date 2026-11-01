#ifndef ACNLWA_MAILLOADADAPT_H
#define ACNLWA_MAILLOADADAPT_H

#include "acnlwa/script/IMailRecept.h"

class MailLoadAdapt : private ::script::IMailRecept {
public:
    virtual ~MailLoadAdapt();
    virtual void VF34();
    virtual void VF35();
    virtual void VF36();
    virtual void VF37();
    virtual void VF38();
};

#endif  // ACNLWA_MAILLOADADAPT_H
