/**
 * FUN_006e2534.c
 * Source line: 1041010
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_006e2534(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x2760) == 0) &&
      (((*(uint *)(param_1 + 0x2764) & 1) == 0 || (*(uint *)(param_1 + 0x2764) == 0)))) &&
     ((iVar1 = FUN_0075f0b0(DAT_0095362c + 0x7874,4), iVar1 == 0 ||
      (iVar1 = FUN_006295d8(DAT_0095362c + 0x7874,4), iVar1 != 0)))) {
    *(code **)(param_1 + 0x2760) = FUN_006e24d0;
    *(undefined4 *)(param_1 + 0x2764) = 0;
    *(undefined4 *)(param_1 + 0x27a8) = 0;
    *(undefined1 *)(param_1 + 0x27c6) = 0;
    return 1;
  }
  return 0;
}
