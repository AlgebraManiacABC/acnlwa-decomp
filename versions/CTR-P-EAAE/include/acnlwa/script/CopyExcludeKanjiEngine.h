#ifndef ACNLWA_SCRIPT_COPYEXCLUDEKANJIENGINE_H
#define ACNLWA_SCRIPT_COPYEXCLUDEKANJIENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class CopyExcludeKanjiEngine : private ::script::MsgEngine {
public:
    virtual ~CopyExcludeKanjiEngine();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_COPYEXCLUDEKANJIENGINE_H
