#ifndef ACNLWA_SCRIPT_STRREMAKECOLOR_H
#define ACNLWA_SCRIPT_STRREMAKECOLOR_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class StrRemakeColor : private ::script::MsgEngine {
public:
    virtual ~StrRemakeColor();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_STRREMAKECOLOR_H
