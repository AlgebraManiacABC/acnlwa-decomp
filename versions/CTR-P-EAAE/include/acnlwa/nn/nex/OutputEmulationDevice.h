#ifndef ACNLWA_NN_NEX_OUTPUTEMULATIONDEVICE_H
#define ACNLWA_NN_NEX_OUTPUTEMULATIONDEVICE_H

#include "acnlwa/nn/nex/EmulationDevice.h"

namespace nn {
namespace nex {

class OutputEmulationDevice : public ::nn::nex::EmulationDevice {
public:
    virtual ~OutputEmulationDevice();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_OUTPUTEMULATIONDEVICE_H
