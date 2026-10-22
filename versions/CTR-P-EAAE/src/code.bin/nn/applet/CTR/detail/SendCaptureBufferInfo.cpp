#include "types.h"

extern "C" {
int FUN_0012a518(...);
}

namespace nn {
namespace applet {
namespace CTR {
namespace detail {

namespace APPLET {
undefined4 SendCaptureBufferInfo(const unsigned char *param_1, unsigned int param_2);
}
void DisconnectAndUnlock();

// was FUN_00480444
undefined4 SendCaptureBufferInfo(const unsigned char *param_1, unsigned int param_2)
{
  undefined4 uVar1;
  
  FUN_0012a518();
  uVar1 = APPLET::SendCaptureBufferInfo(param_1,param_2);
  DisconnectAndUnlock();
  return uVar1;
}

}  // namespace detail
}  // namespace CTR
}  // namespace applet
}  // namespace nn
