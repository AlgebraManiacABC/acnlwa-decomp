/**
 * FUN_005b3764.c
 * Source line: 863905
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005b3764(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007137d4(param_1 + 0x14);
  if (iVar1 != 0) {
    FUN_0022bc08(param_1 + 0x14);
    iVar1 = FUN_0074fdc8(param_1 + 0x14);
    if (iVar1 != 0) {
      FUN_0022bac4(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x3f4) = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0;
    }
  }
  return;
}
