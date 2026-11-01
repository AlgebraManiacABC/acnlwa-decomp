#ifndef ACNLWA_SCRIPT_STRNICKNAMEENGINE_H
#define ACNLWA_SCRIPT_STRNICKNAMEENGINE_H

#include "acnlwa/script/SeqEngine.h"

namespace script {

class StrNicknameEngine : private ::script::SeqEngine {
public:
    virtual ~StrNicknameEngine();
    virtual void VF02();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_STRNICKNAMEENGINE_H
