#ifndef ACNLWA_SCRIPT_MAILINSERT_H
#define ACNLWA_SCRIPT_MAILINSERT_H

#include "acnlwa/script/Insert.h"

namespace script {

class MailInsert : public ::script::Insert {
public:
    virtual ~MailInsert();
    virtual void VF02();
    virtual void VF49();
    virtual void VF50();
    virtual void VF51();
    virtual void VF52();
    virtual void VF53();
    virtual void VF54();
    virtual void VF64();
    virtual void VF65();
    virtual void VF73();
    virtual void VF85();
    virtual void VF86();
    virtual void VF93();
    virtual void VF118();
    virtual void VF119();
    virtual void VF120();
    virtual void VF121();
    virtual void VF122();
    virtual void VF123();
    virtual void VF124();
    virtual void VF134();
    virtual void VF135();
    virtual void VF143();
    virtual void VF155();
    virtual void VF156();
    virtual void VF163();
    virtual void VF188();
    virtual void VF189();
    virtual void VF190();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_MAILINSERT_H
