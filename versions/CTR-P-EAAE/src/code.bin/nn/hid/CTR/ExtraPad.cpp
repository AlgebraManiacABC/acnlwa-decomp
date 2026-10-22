#include "acnlwa/nn/hid/CTR/ExtraPad.h"
#include "types.h"

extern "C" {
int FUN_0034b124(...);
}

namespace nn {
namespace hid {
namespace CTR {

// was FUN_00354090
bool ExtraPad::IsSampling()
{
  int iVar1;
  
  iVar1 = FUN_0034b124();
  return iVar1 == 4;
}

}  // namespace CTR
}  // namespace hid
}  // namespace nn
