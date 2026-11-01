#ifndef ACNLWA_NN_NWM_BEACONDESCRIPTIONREADER_H
#define ACNLWA_NN_NWM_BEACONDESCRIPTIONREADER_H

#include "acnlwa/nn/nwm/BssDescriptionReaderBase.h"

namespace nn {
namespace nwm {

class BeaconDescriptionReader : public ::nn::nwm::BssDescriptionReaderBase {
public:
    virtual ~BeaconDescriptionReader();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace nwm
}  // namespace nn

#endif  // ACNLWA_NN_NWM_BEACONDESCRIPTIONREADER_H
