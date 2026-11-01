#ifndef ACNLWA_SCRIPT_INSERTSEARCHER_H
#define ACNLWA_SCRIPT_INSERTSEARCHER_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class InsertSearcher : public ::script::MsgEngine {
public:
    virtual ~InsertSearcher();
    virtual void VF04();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_INSERTSEARCHER_H
