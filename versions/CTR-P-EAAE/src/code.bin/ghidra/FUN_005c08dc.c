/**
 * FUN_005c08dc.c
 * Source line: 870069
 * Body lines: 10
 */
#include "../../../include/types.h"

FUN_005c08dc(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_005c33d0(param_3,param_4);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x47c);
    *param_2 = *(undefined4 *)(iVar1 + 0x480);
    return 1;
  }
  *param_2 = 0;
  *param_1 = 0;
  return 0;
}
