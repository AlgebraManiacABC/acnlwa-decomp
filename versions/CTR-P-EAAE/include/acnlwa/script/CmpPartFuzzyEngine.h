#ifndef ACNLWA_SCRIPT_CMPPARTFUZZYENGINE_H
#define ACNLWA_SCRIPT_CMPPARTFUZZYENGINE_H

#include "acnlwa/script/MsgEngine.h"

namespace script {

class CmpPartFuzzyEngine : private ::script::MsgEngine {
public:
    class EngineA : private ::script::MsgEngine {
    public:
        virtual ~EngineA();
        virtual void VF04();
        virtual void VF05();
        virtual void VF06();
    };

    class EngineB : private ::script::MsgEngine {
    public:
        virtual ~EngineB();
        virtual void VF03();
        virtual void VF04();
        virtual void VF05();
        virtual void VF06();
    };

    virtual ~CmpPartFuzzyEngine();
    virtual void VF04();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_CMPPARTFUZZYENGINE_H
