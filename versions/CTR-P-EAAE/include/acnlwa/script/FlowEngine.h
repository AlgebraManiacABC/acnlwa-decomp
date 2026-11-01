#ifndef ACNLWA_SCRIPT_FLOWENGINE_H
#define ACNLWA_SCRIPT_FLOWENGINE_H

namespace script {

class FlowEngine {
public:
    virtual void VF00() = 0;
    virtual void VF01() = 0;
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_FLOWENGINE_H
