#ifndef ACNLWA_SCRIPT_SEARCHER_H
#define ACNLWA_SCRIPT_SEARCHER_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class Searcher : public ::script::MsgEngine {
public:
    virtual ~Searcher();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_SEARCHER_H
