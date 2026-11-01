#ifndef ACNLWA_SCRIPT_DIALOGCOMPO_PAGEANALYZE_H
#define ACNLWA_SCRIPT_DIALOGCOMPO_PAGEANALYZE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {
namespace DialogCompo {

class PageAnalyze : private ::script::MsgEngine {
public:
    virtual ~PageAnalyze();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace DialogCompo
}  // namespace script

#endif  // ACNLWA_SCRIPT_DIALOGCOMPO_PAGEANALYZE_H
