#include "acnlwa/sead/hostio/Node.h"

namespace {

class MailboxHostIO : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

void MailboxHostIO::VF00() {}

}  // namespace
