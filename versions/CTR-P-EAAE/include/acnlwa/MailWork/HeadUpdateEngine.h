#ifndef ACNLWA_MAILWORK_HEADUPDATEENGINE_H
#define ACNLWA_MAILWORK_HEADUPDATEENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace MailWork {

class HeadUpdateEngine : public ::script::MsgEngine {
public:
    virtual ~HeadUpdateEngine();
    virtual void VF02();
    virtual void VF03();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace MailWork

#endif  // ACNLWA_MAILWORK_HEADUPDATEENGINE_H
