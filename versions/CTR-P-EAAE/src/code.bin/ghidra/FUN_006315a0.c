#include "../../../include/types.h"

void FUN_006315a0(int *param_1)

{
  if (param_1[0x40a] != 0) {
    FUN_00112e08(param_1[0x40a],&DAT_0095bfdc);
    (**(code **)(*param_1 + 0x158))(param_1);
    return;
  }
  return;
}
