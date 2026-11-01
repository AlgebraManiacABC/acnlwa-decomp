#ifndef ACNLWA_SCRIPT_CMPFUZZYENGINE_H
#define ACNLWA_SCRIPT_CMPFUZZYENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class CmpFuzzyEngine : private ::script::MsgEngine {
public:
    class EngineB : private ::script::MsgEngine {
    public:
        virtual ~EngineB();
        virtual void VF04();
        virtual void VF05();
        virtual void VF06();
    };

    virtual ~CmpFuzzyEngine();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_CMPFUZZYENGINE_H
