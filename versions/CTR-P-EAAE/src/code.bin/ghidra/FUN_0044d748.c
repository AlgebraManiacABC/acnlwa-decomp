/**
 * FUN_0044d748.c
 * Source line: 613858
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0044d748(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0xe0a1482b;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    uVar1 = 0;
  }
  return uVar1;
}
