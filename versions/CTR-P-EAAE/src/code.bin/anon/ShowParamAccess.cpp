#include "acnlwa/sead/hostio/Node.h"

namespace {

class ShowParamAccess : public ::sead::hostio::Node {
public:
    virtual void VF00();
    virtual ~ShowParamAccess();
};

void ShowParamAccess::VF00() {}

ShowParamAccess::~ShowParamAccess() {}

}  // namespace
