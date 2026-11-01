#include "acnlwa/sead/hostio/Node.h"

namespace {

class EditHostIO : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

void EditHostIO::VF00() {}

}  // namespace
