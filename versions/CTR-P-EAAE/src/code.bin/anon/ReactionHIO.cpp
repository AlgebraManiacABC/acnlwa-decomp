#include "acnlwa/sead/hostio/Node.h"

namespace {

class ReactionHIO : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

void ReactionHIO::VF00() {}

}  // namespace
