#ifndef ACNLWA_MIGRATIONRECEIVER_SCANBUF_H
#define ACNLWA_MIGRATIONRECEIVER_SCANBUF_H

#include "acnlwa/net/ScanBufBase.h"

namespace MigrationReceiver {

class ScanBuf : public ::net::ScanBufBase {
public:
    virtual ~ScanBuf();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace MigrationReceiver

#endif  // ACNLWA_MIGRATIONRECEIVER_SCANBUF_H
