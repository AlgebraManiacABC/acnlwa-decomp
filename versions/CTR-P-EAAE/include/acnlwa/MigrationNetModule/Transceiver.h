#ifndef ACNLWA_MIGRATIONNETMODULE_TRANSCEIVER_H
#define ACNLWA_MIGRATIONNETMODULE_TRANSCEIVER_H

#include "acnlwa/net/SystemCallback.h"

namespace MigrationNetModule {

class Transceiver : public ::net::SystemCallback {
public:
    virtual ~Transceiver();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace MigrationNetModule

#endif  // ACNLWA_MIGRATIONNETMODULE_TRANSCEIVER_H
