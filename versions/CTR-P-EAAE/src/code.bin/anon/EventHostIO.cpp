#include "acnlwa/sead/hostio/Node.h"

namespace {

class EventHostIO : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

void EventHostIO::VF00() {}

}  // namespace
