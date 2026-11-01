#ifndef ACNLWA_NN_NEX_DATASTOREPROTOCOLCLIENT_H
#define ACNLWA_NN_NEX_DATASTOREPROTOCOLCLIENT_H

#include "acnlwa/nn/nex/ClientProtocol.h"

namespace nn {
namespace nex {

class DataStoreProtocolClient : public ::nn::nex::ClientProtocol {
public:
    virtual ~DataStoreProtocolClient();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_DATASTOREPROTOCOLCLIENT_H
