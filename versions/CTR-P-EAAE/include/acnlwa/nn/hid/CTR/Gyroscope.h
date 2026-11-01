#ifndef ACNLWA_NN_HID_CTR_GYROSCOPE_H
#define ACNLWA_NN_HID_CTR_GYROSCOPE_H

#include "acnlwa/nn/hid/CTR/HidBase.h"

namespace nn {
namespace hid {
namespace CTR {

class Gyroscope : public ::nn::hid::CTR::HidBase {
public:
    virtual ~Gyroscope();
};

}  // namespace CTR
}  // namespace hid
}  // namespace nn

#endif  // ACNLWA_NN_HID_CTR_GYROSCOPE_H
