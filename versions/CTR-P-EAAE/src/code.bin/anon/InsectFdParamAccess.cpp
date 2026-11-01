#include "acnlwa/sead/hostio/Node.h"

namespace {

class InsectFdParamAccess : public ::sead::hostio::Node {
public:
    virtual void VF00();
    virtual ~InsectFdParamAccess();
    virtual void VF03();
};

void InsectFdParamAccess::VF00() {}

InsectFdParamAccess::~InsectFdParamAccess() {}

void InsectFdParamAccess::VF03() {}

}  // namespace
