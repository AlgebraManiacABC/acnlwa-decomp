#ifndef ACNLWA_SCRIPT_DIALOGCOMPO_PAGEPUT_H
#define ACNLWA_SCRIPT_DIALOGCOMPO_PAGEPUT_H

#include "acnlwa/script/MsgEngine.h"

namespace script {
namespace DialogCompo {

class PagePut : private ::script::MsgEngine {
public:
    virtual ~PagePut();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace DialogCompo
}  // namespace script

#endif  // ACNLWA_SCRIPT_DIALOGCOMPO_PAGEPUT_H
