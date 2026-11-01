#ifndef ACNLWA_NN_NWM_CTR_BEACONREADER_H
#define ACNLWA_NN_NWM_CTR_BEACONREADER_H

#include "acnlwa/nn/nwm/CTR/BssReader.h"

namespace nn {
namespace nwm {
namespace CTR {

class BeaconReader : public ::nn::nwm::CTR::BssReader {
public:
    virtual ~BeaconReader();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace CTR
}  // namespace nwm
}  // namespace nn

#endif  // ACNLWA_NN_NWM_CTR_BEACONREADER_H
