#include "acnlwa/sead/hostio/Node.h"

namespace {

class TelopNode : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

void TelopNode::VF00() {}

}  // namespace
