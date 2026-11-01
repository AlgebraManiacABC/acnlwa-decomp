#ifndef ACNLWA_NOTICELOADADAPT_H
#define ACNLWA_NOTICELOADADAPT_H

#include "acnlwa/script/IMailRecept.h"

class NoticeLoadAdapt : private ::script::IMailRecept {
public:
    virtual ~NoticeLoadAdapt();
    virtual void VF35();
    virtual void VF36();
    virtual void VF37();
    virtual void VF38();
};

#endif  // ACNLWA_NOTICELOADADAPT_H
