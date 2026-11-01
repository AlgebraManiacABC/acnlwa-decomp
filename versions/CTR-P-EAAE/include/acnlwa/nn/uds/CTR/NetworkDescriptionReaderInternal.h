#ifndef ACNLWA_NN_UDS_CTR_NETWORKDESCRIPTIONREADERINTERNAL_H
#define ACNLWA_NN_UDS_CTR_NETWORKDESCRIPTIONREADERINTERNAL_H

#include "acnlwa/nn/nwm/BeaconDescriptionReader.h"

namespace nn {
namespace uds {
namespace CTR {

class NetworkDescriptionReaderInternal : public ::nn::nwm::BeaconDescriptionReader {
public:
    virtual ~NetworkDescriptionReaderInternal();
};

}  // namespace CTR
}  // namespace uds
}  // namespace nn

#endif  // ACNLWA_NN_UDS_CTR_NETWORKDESCRIPTIONREADERINTERNAL_H
