#ifndef ACNLWA_SCRIPT_MSGENGINE_H
#define ACNLWA_SCRIPT_MSGENGINE_H

namespace script {

class MsgEngine {
public:
    virtual ~MsgEngine();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_MSGENGINE_H
