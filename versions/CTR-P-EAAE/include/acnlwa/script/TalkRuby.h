#ifndef ACNLWA_SCRIPT_TALKRUBY_H
#define ACNLWA_SCRIPT_TALKRUBY_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class TalkRuby : public ::script::MsgEngine {
public:
    virtual ~TalkRuby();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_TALKRUBY_H
