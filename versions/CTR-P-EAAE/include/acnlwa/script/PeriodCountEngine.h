#ifndef ACNLWA_SCRIPT_PERIODCOUNTENGINE_H
#define ACNLWA_SCRIPT_PERIODCOUNTENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class PeriodCountEngine : private ::script::MsgEngine {
public:
    virtual ~PeriodCountEngine();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_PERIODCOUNTENGINE_H
