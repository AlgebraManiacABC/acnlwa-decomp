#include "acnlwa/acnlwa_todo_stubs.h"
#include "acnlwa/pead/IDelegate1.h"

namespace {

class Delegate : public pead::IDelegate1<pead::PrintConfig::PrintEventArg_const&> {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
};

void Delegate::VF00() {}

void Delegate::VF01() {}

void Delegate::VF02() {}

}  // namespace
