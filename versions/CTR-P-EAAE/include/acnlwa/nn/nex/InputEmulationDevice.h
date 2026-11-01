#ifndef ACNLWA_NN_NEX_INPUTEMULATIONDEVICE_H
#define ACNLWA_NN_NEX_INPUTEMULATIONDEVICE_H

#include "acnlwa/nn/nex/EmulationDevice.h"

namespace nn {
namespace nex {

class InputEmulationDevice : public ::nn::nex::EmulationDevice {
public:
    virtual ~InputEmulationDevice();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_INPUTEMULATIONDEVICE_H
