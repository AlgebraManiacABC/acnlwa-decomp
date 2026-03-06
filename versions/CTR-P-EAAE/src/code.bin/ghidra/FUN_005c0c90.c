/**
 * FUN_005c0c90.c
 * Source line: 870259
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_005c0c90(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(param_2,1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 != NULL) {
    *param_1 = *(undefined4 *)(iVar1 + 0x424);
    param_1[1] = *(undefined4 *)(iVar1 + 0x428);
    param_1[2] = *(undefined4 *)(iVar1 + 0x42c);
  }
  if ((-1 < (int)((uint)*(byte *)(iVar1 + 0x173) << 0x1e)) &&
     (-1 < (int)((uint)*(byte *)(iVar1 + 0x173) << 0x1d))) {
    return 0;
  }
  return 1;
}
