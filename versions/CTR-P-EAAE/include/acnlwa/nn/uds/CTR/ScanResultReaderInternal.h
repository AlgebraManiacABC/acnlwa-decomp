#ifndef ACNLWA_NN_UDS_CTR_SCANRESULTREADERINTERNAL_H
#define ACNLWA_NN_UDS_CTR_SCANRESULTREADERINTERNAL_H

#include "acnlwa/nn/nwm/ScanResultReaderBase.h"

namespace nn {
namespace uds {
namespace CTR {

class ScanResultReaderInternal : public ::nn::nwm::ScanResultReaderBase {
public:
    virtual ~ScanResultReaderInternal();
};

}  // namespace CTR
}  // namespace uds
}  // namespace nn

#endif  // ACNLWA_NN_UDS_CTR_SCANRESULTREADERINTERNAL_H
