#ifndef ACNLWA_NN_NEX_LOGDEVICECONSOLE_H
#define ACNLWA_NN_NEX_LOGDEVICECONSOLE_H

#include "acnlwa/nn/nex/LogDevice.h"

namespace nn {
namespace nex {

class LogDeviceConsole : public ::nn::nex::LogDevice {
public:
    virtual ~LogDeviceConsole();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_LOGDEVICECONSOLE_H
