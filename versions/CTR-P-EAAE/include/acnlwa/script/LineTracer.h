#ifndef ACNLWA_SCRIPT_LINETRACER_H
#define ACNLWA_SCRIPT_LINETRACER_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class LineTracer : private ::script::MsgEngine {
public:
    virtual ~LineTracer();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_LINETRACER_H
