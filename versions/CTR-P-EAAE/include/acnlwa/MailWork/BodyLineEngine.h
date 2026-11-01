#ifndef ACNLWA_MAILWORK_BODYLINEENGINE_H
#define ACNLWA_MAILWORK_BODYLINEENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace MailWork {

class BodyLineEngine : public ::script::MsgEngine {
public:
    virtual ~BodyLineEngine();
    virtual void VF02();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace MailWork

#endif  // ACNLWA_MAILWORK_BODYLINEENGINE_H
