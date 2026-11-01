#include "types.h"

extern "C" {
int FUN_00134250(...);
}

namespace nn {
namespace y2r {
namespace CTR {

enum OutputFormat {};

namespace detail {

// TODO: verify FUN_00469d48
undefined4 GetOutputFormatBytes(OutputFormat param_1)
{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 4;
  }
  else if (param_1 == 1) {
    uVar1 = 3;
  }
  else if (param_1 == 2 || param_1 == 3) {
    uVar1 = 2;
  }
  else {
    FUN_00134250();
  }
  return uVar1;
}

}  // namespace detail

}  // namespace CTR
}  // namespace y2r
}  // namespace nn
