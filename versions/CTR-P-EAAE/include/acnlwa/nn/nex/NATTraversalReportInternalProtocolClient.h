#ifndef ACNLWA_NN_NEX_NATTRAVERSALREPORTINTERNALPROTOCOLCLIENT_H
#define ACNLWA_NN_NEX_NATTRAVERSALREPORTINTERNALPROTOCOLCLIENT_H

#include "acnlwa/nn/nex/ClientProtocol.h"

namespace nn {
namespace nex {

class NATTraversalReportInternalProtocolClient : public ::nn::nex::ClientProtocol {
public:
    virtual ~NATTraversalReportInternalProtocolClient();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NATTRAVERSALREPORTINTERNALPROTOCOLCLIENT_H
